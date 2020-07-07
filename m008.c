/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int n=0,count=0,aux,i=0,sub,m,N=0,a;
  char prov[MAX];
  while (s[n]!=0)
  {
  n++;
  if (s[n]==' ')
  count++;
  if (count<2)
  aux=n+2;
  }
  n=n-1;
  sub=n-aux;
  m=aux;
  for (m;m<=n;m++)
  {
  if ((s[m]>='a') && (s[m]<='z'))
    s[m]=s[m]-32;
  }

  while (i<=n)
  {
    if (i!=n)
    {
    prov[i]=s[i];
    }
    else
    prov[i]=' ';
    i++;
  }

  while (N!=n)
  {
  if (N<=sub)
  {
    a=aux + N;
    s[N]=prov[a];
  }
  else
  {
    a=N-sub-1;
    s[N]=prov[a];
  }
  N++;
  }
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);

  lastname (name);

  printf ("%s\n", name);

  return 0;
}
