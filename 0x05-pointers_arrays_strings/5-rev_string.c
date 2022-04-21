#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, j;
	char a[500];
	i = 0;
	j = 0;
	     while(*(s + 1))
	     {
		     *(a + 1) = *(s + 1);
		     i++;
	     }
	     i = i - 1;
	     while (i >= 0)
	     {
		     *(s + 1) = *(a + j);
		     j++;
		     i--;
	     }
}

