#include <stdio.h>
void ID(int n)
{
    if (n == 0)
    {           // base case
        return; // for stop the recursion
    }
    printf("%d\n", n);
    ID(n - 1);         // call
    printf("%d\n", n); // code
    return;
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    ID(n); // calling the function
    return 0;
}