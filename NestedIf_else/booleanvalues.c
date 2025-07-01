#include <stdio.h>
int main()
{
     int x = 5, y, z;
    y = x = 15;
    z = x < 15;
    printf("\nx=%d y=%d z=%d", x, y, z);

    return 0;
}
