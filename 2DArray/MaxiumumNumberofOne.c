#include <stdio.h>
int main()
{
  int n;
  printf("Enter Rows    : ");
  scanf("%d", &n);
  int m;
  printf("Enter Columbs : ");
  scanf("%d", &m);
  int Maxcount = 0;
  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    int Count = 0;
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == 1)
      {
        Count++;
      }
    }
    if (Maxcount < Count)
    {
      Maxcount = Count;
    }
    printf("\n");
  }
  printf("%d", Maxcount);
  return 0;
}