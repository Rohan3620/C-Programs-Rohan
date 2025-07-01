#include <stdio.h>
int decreasing(int n)
{ // for back counting till 1
    if (n == 0) return 1; // for stop the recursion
    printf("%d\n", n);
    return  decreasing(n - 1);
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    decreasing(n); // calling the function
    return 0;
}