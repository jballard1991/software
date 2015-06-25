#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>

void die (char *s1, char *s2, int delflag)
{
  write(2, s1, strlen(s1));
  write(2, ": ", 2);
  write(2, s2, strlen(s2));
  write(2, "\n", 1);
  if (delflag == 1) if (unlink(s1) == -1) die(s1, strerror(errno), 0);
  exit(1);
}

int main (int argc, char **argv)
{
  char *filename, *c;
  int fh;
  off_t filesize, new_pos;
  ssize_t written;

  if (argc != 3) die("usage", "sparse <filename> <bytes>", 0);

  for (filesize = 0, c = argv[2]; *c; ++c)
    filesize = filesize * 10 + (*c - '0');

  if (filesize < 1)
    die("invalid filesize (must be at least 1 byte)", argv[2], 0);

  --filesize;
  filename = argv[1];

  fh = open(filename, O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 00644);
  if (fh == -1) die(filename, strerror(errno), 0);

  new_pos = lseek(fh, filesize, SEEK_SET);
  if (new_pos == -1) die(filename, strerror(errno), 1);
  if (new_pos != filesize) die(filename, "lseek() sillyness", 1);

  written = write(fh, "", 1);
  if (written == -1) die(filename, strerror(errno), 1);
  if (written != 1) die(filename, "write() sillyness", 1);

  if (close(fh) == -1) die(filename, strerror(errno), 1);

  return 0;
}
