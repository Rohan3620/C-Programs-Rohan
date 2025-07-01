#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{ // cr=current row,cc=current columb,er=ending row, ec ending ccolumb
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc == ec)
        return 1;
        if (cr > er || cc > ec)
        return 0;
    if (cr == er) // only right ways
    {
        rightways += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec) // only columb ways
    {
        downways += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightways += maze(cr, cc + 1, er, ec);
        downways += maze(cr + 1, cc, er, ec);
    }

    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n;
    printf("Enter number of rows in maze    : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of coloums in maze : ");
    scanf("%d", &m);
    int noOfways = maze(1, 1, n, m);
    printf("%d", noOfways);
    return 0;
}