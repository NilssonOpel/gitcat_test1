#include <stdio.h>

extern char *get_a_string(int a);
extern int   file_in_subdir(int in);

int the_ladder_to_success3(int in)
{
  printf ("Hi, I am Cess\n");

  printf("%s\n", get_a_string(file_in_subdir(in)));

  return 0;
}

