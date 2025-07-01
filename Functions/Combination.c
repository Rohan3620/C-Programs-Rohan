#include <stdio.h>
int Factorial(int x)
{ // function for finnding factorial
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
 
int main()
{

    int n, r;
    printf("Enter N :");
    scanf("%d", &n);
    printf("Enter R :");
    scanf("%d", &r);
    if (n >= r && r >= 0)
    {
        //     int nfact = Factorial(n);      // for enter of n fectorial
        //     int rfact = Factorial(r);      // for enter of r fectorial
        //     int nrfact = Factorial(n - r); // for enter of n-r fectorial

        int nCr = Factorial(n) / (Factorial(r) * Factorial(n - r)); // for finding combination
        printf("\nAnswer : %d", nCr);
    }
    else
    {
        printf("Answer : Please enter n>=r>=0");
    }

    return 0;
}