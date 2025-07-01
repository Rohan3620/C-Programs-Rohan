#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int Totalpairs = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == n)
            {
                Totalpairs++;
                printf("(%d %d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d", Totalpairs);
//    lets  Dry Run with n = 12
// Initialization:

// n = 12
// arr = {1, 2, 3, 4, 5, 6, 7, 8}
// Totalpairs = 0
// User Input:

// User enters 12 for n.
// Nested Loop Execution:

// Outer Loop (i):
// i = 0:
// Inner Loop (j):
// j = 1: arr[0] + arr[1] = 1 + 2 = 3 (not equal to 12)
// j = 2: arr[0] + arr[2] = 1 + 3 = 4 (not equal to 12)
// j = 3: arr[0] + arr[3] = 1 + 4 = 5 (not equal to 12)
// j = 4: arr[0] + arr[4] = 1 + 5 = 6 (not equal to 12)
// j = 5: arr[0] + arr[5] = 1 + 6 = 7 (not equal to 12)
// j = 6: arr[0] + arr[6] = 1 + 7 = 8 (not equal to 12)
// j = 7: arr[0] + arr[7] = 1 + 8 = 9 (not equal to 12)
// i = 1:
// Inner Loop (j):
// j = 2: arr[1] + arr[2] = 2 + 3 = 5 (not equal to 12)
// j = 3: arr[1] + arr[3] = 2 + 4 = 6 (not equal to 12)
// j = 4: arr[1] + arr[4] = 2 + 5 = 7 (not equal to 12)
// j = 5: arr[1] + arr[5] = 2 + 6 = 8 (not equal to 12)
// j = 6: arr[1] + arr[6] = 2 + 7 = 9 (not equal to 12)
// j = 7: arr[1] + arr[7] = 2 + 8 = 10 (not equal to 12)
// i = 2:
// Inner Loop (j):
// j = 3: arr[2] + arr[3] = 3 + 4 = 7 (not equal to 12)
// j = 4: arr[2] + arr[4] = 3 + 5 = 8 (not equal to 12)
// j = 5: arr[2] + arr[5] = 3 + 6 = 9 (not equal to 12)
// j = 6: arr[2] + arr[6] = 3 + 7 = 10 (not equal to 12)
// j = 7: arr[2] + arr[7] = 3 + 8 = 11 (not equal to 12)
// i = 3:
// Inner Loop (j):
// j = 4: arr[3] + arr[4] = 4 + 5 = 9 (not equal to 12)
// j = 5: arr[3] + arr[5] = 4 + 6 = 10 (not equal to 12)
// j = 6: arr[3] + arr[6] = 4 + 7 = 11 (not equal to 12)
// j = 7: arr[3] + arr[7] = 4 + 8 = 12 (equal to 12)
// Totalpairs++ → Totalpairs = 1
// Prints: (4 8)
// i = 4:
// Inner Loop (j):
// j = 5: arr[4] + arr[5] = 5 + 6 = 11 (not equal to 12)
// j = 6: arr[4] + arr[6] = 5 + 7 = 12 (equal to 12)
// Totalpairs++ → Totalpairs = 2
// Prints: (5 7)
// j = 7: arr[4] + arr[7] = 5 + 8 = 13 (not equal to 12)
// i = 5:
// Inner Loop (j):
// j = 6: arr[5] + arr[6] = 6 + 7 = 13 (not equal to 12)
// j = 7: arr[5] + arr[7] = 6 + 8 = 14 (not equal to 12)
// i = 6:
// Inner Loop (j):
// j = 7: arr[6] + arr[7] = 7 + 8 = 15 (not equal to 12)
// i = 7:
// No elements left to check.
// Final Output:

// printf("\nTotal pairs: %d\n", Totalpairs);
// Prints: Total pairs: 2
    return 0;
}