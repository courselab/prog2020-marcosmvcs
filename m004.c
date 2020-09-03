/* m004.c - Binary to decimal.

   This program takes a string read as a command line argument and,
   interpreting it as a positive binary integer, outputs its
   corresponding value in decimal base.


   E.g.

      command line    : m004 0011
      expected output : 3

   Directions:

      Please, edit function decimal();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Return the value in decimal base of the string b, interpreted
   as the a positive binary number. If the string contains any
   characters other than '1's and '0's, truncate the string
   right before the spurious character (eg. truncate 110x001
   into 110); an empty string means zero. */

int decimal (char *b)
{
  int sum=0,i=0,n,v=1,a;
  while (b[i]!=0)
  {
    i++;
  }
  n=i-1;
  for (n;n>=0;n--)
  {
  a=b[n]-48;
  sum=sum+v*a;
  v=2*v;
  }

  return sum;
}

#define USAGE "m004 <string>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  n = decimal (argv[1]);

  printf ("%d\n", n);

  return 0;
}
