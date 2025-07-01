#include <stdio.h>

#define NUM_COLUMNS 2

int main()
{
    int n; // we Take a n as variable
    printf("Enter the number of students: ");
    scanf("%d", &n); // to get the value of n

    int Marks[n][NUM_COLUMNS]; // Marks as 2D array to store the two values

    for (int i = 0; i < n; i++)
    {
        printf("Enter Roll Number: ");
        scanf("%d", &Marks[i][0]); // to enter the Rollno
        printf("Enter Marks      : ");
        scanf("%d", &Marks[i][1]); // to enter the Marks
        printf("\n");
    }
    printf("RollNo  Marks\n");

    for (int i = 0; i < n; i++)
    {
        printf("  %d      %d\n", Marks[i][0], Marks[i][1]); // to print the set of the roll no marks
    }

    return 0;
}
