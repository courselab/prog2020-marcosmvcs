/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int sum=0, aux=1,r;
  if (month==1)
  sum=0;
  if (month==2)
  sum=31;
  if (month==3)
  sum=60;
  if (month==4)
  sum=91;
  if (month==5)
  sum=121;
  if (month==6)
  sum=152;
  if (month==7)
  sum=182;
  if (month==8)
  sum=213;
  if (month==9)
  sum=244;
  if (month==10)
  sum=274;
  if (month==11)
  sum=305;
  if (month==12)
  sum=335;

  sum= sum + day + 2;

  printf("%d\n",sum);

  r= sum%7;

  return r;
}


/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }

  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);

  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }

  return 0;
}
