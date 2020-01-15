#include <stdio.h>


extern int   file_in_subdir(int in);

int the_ladder_to_success4(int in);

int the_ladder_to_success3(int in)
{
  printf ("You are at the   third   stage on the ladder to success\n");

  return the_ladder_to_success4(in);
}

