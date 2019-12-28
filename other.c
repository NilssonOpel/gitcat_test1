

char *get_a_string(int a)
{
  switch(a)
  {
      case 0:
        return "String 0";
        break;

      case 1:
        return "String 1";
        break;

      case 2:
        return "String 2";
        break;

      default:
        int *ptr = (int *)4711;
        *ptr = 4711;
  }

  return "Mumbo Jumbo";
}


