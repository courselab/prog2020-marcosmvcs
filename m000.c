/* m000.c - Pitagorean name number

   This program takes the a person's full name read as a string from
   from the standard input and output its Pitagorean Number as shown
   in reference [1] at the bottom of this source file.

   E.g.

      command line    : John Doe
      expected output : 35

   Directions:

      Please, edit function roman();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 255

/* Write the number 'n' in Roman numerals.*/

int pitagorean (char *s)
{

  int i, mod, sum = 0, contador=0, pit=0;
  char rom;

    for(i=0;s[i]!=0; i++)
    {
      if((s[i]>=65) && (s[i]<=90))
        {
          mod=(s[i]-65)%9 + 1;
          sum = sum + mod;
        }
      if((s[i]>=97) && (s[i]<=122))
        {
          mod=(s[i]-97)%9 + 1;
          sum = sum + mod;
        }
    }
      while(sum!=0)
        {
        pit=pit+sum%10;
        sum=sum/10;
        }
    if (pit==1)
        rom='I';
            else if (pit==2)
                rom='II';
                    else if (pit==3)
                        rom='III';
                            else if (pit==4)
                                rom='IV';
                                    else if (pit==5)
                                        rom='V';
                                            else if (pit==6)
                                                rom='V1';
                                                    else if (pit==7)
                                                        rom='VII';
                                                            else if (pit==8)
                                                                rom='VIII';
                                                                    else if (pit==9)
                                                                        rom='IX';
return rom;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);

  n = pitagorean (name);

  printf ("%d\n", n);

  return 0;
}

/*
    References:

    [1] Pitagorean name number
    https://en.wikipedia.org/wiki/Numerology#Pythagorean_system
*/
