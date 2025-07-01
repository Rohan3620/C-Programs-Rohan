#include <stdio.h>
int main()
{
    int marks[10] = {15, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("Roll number of student marks less than 35 are %d\n", i);
        }
    }

    return 0;
}