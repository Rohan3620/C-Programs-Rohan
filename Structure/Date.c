#include <stdio.h>
int main()
{
  int flag=0;
    typedef struct Date
    {
        int date;
        int month;
        int year;
    } Date;
    Date a , b;
    a.date = 5;
    a.month = 12;
    a.year = 1999;

    b.date = 5;
    b.month = 10;
    b.year = 1939;
  if (a.date!=b.date) flag=1;
  if (a.month!=b.month) flag=1;
    if (a.year!=b.year) flag=1;
   if (flag==0)
   {
    printf("Date are same\n");
   }
    else
    printf("Date are not same\n");
    Date c;
    c=a;
  if (a.date!=b.date||a.month!=b.month||a.year!=b.year)
  {
     printf("Date are same in a and c\n");
  }
  else
  printf("Date are not same in a and c\n");
    return 0;
}