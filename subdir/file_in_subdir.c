#include <stdio.h>
#include "file_in_subdir.h"

extern char* get_a_string(int a);

int file_in_subdir(int in)
{
  printf("file_in_subdir\n");

  return in + 3;
}

int the_ladder_to_success5(int in)
{
  printf ("You are at the     fifth stage on the ladder to success\n");
  printf ("Hi, I am Cess\n");
  printf("%s\n", get_a_string(file_in_subdir(in)));

  return 27;
}


