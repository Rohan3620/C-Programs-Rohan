#include <stdio.h>
// Function to calculate the sum of first n natural numbers using recursion
int sum(int n)
{
    if (n == 0) // base case: when n is 0 or n is 1
    {

        return 0; // stop the recursion
    }
    int recans = n + sum(n - 1); // recursive call with s=n+sum(n-1)
    return recans;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n); // read an integer from the user
    int x = sum(n);  // call the recursive function with n
    printf("Answer is %d", x);
    return 0; // Return 0 to indicate successful execution
}