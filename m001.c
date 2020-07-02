/* m001.c - Greatest of two.

   This program takes three integers read as command
   line arguments and outputs the greatest among them.

   E.g.

      command line    : m001 5 20 7
      expected output : 20

   Directions:

      Please, edit function greatest();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m001 <num1> <num2> <num3>\n"

/* Return the greatest among a, b and c. */

int greatest (int a, int b, int c)
{
    int m, sub1, sub2, sub3;
    sub1= a-b;
    sub2= a-c;
    sub3= b-c;
    if (sub1>=0 && sub2>=0)
    m=a;
    else if (sub1<=0 && sub3>=0)
    m=b;
    else
    m=c;
  return m;
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;
  int g;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  g = greatest (a, b, c);

  printf ("%d\n", g);

  return 0;
}
