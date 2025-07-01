#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr; // Declare variables at the beginning
    int *p;
    printf("Enter the number of integers you want: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    p = ptr;
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("You entered: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(ptr);

    return 0;
}
