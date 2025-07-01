// Program to check Number is prime or not
#include <stdio.h>
int main()
{
  int n;
  printf("Enter number : ");
  scanf("%d", &n);
  int a = 0;
  for (int i = 2; i <= n - 1; i++)
  {
    if (n % i == 0)
    {
      a = 1;
      break;
    }
  }
  if (n == 1)
    printf("one is not copmposite not prime");
  else if (a == 0)
    printf("The number is Prime\n");
  else
    printf("The number is not prime\n");

  return 0;
}