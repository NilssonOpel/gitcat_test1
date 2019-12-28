#include <stdio.h>
#include "file_in_subdir.h"

int file_in_subdir(int in)
{
  printf("file_in_subdir\n");

  return in + 3;
}

