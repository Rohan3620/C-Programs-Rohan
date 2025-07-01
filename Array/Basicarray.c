#include <stdio.h>
int main()
{
    // int a[5] = {2, 4, 6, 8, 1}; // we cretaed 5 space
    // a[4] = 100;                 // it means the vale of 4 is changed to 1 to 100
    // printf("%d\n", a[4]);       // the space name is 0 to n it's mean a[0]=2....a[4]=1

    // float b[5] = {1.2, 2.4, 0.6, 1.8, 0.1}; // we cretaed 5 space
    // printf("%f\n", b[2]);
    // char ch[5] = {'a', 'b', 'c', 'd', 'e'}; // we cretaed 5 space
    // printf("%c\n", ch[3]);
    // int d[4];
    // d[0]=33;//Accesing of Elements of Array
    // d[1]=3;
    // d[2]=3;
    // d[3]=5;
    // printf("\n%d", d[3]);
    // int x[3];
    // printf("Enter a Number :");
    // scanf("%d",&x[0]);
    // printf("Enter a Number :");
    // scanf("%d",&x[1]);
    // printf("Enter a Number :");
    // scanf("%d",&x[2]);
    //  printf("%d\n",x[1]);
    //  printf("%d\n",x[0]);
    //  printf("%d\n",x[2]);
    int arr[5] = {2, 5, 6, 7, 8};
    for (int i = 0; i <= 4; i++) // i=0,1,2,3,4
    {
        int y = i + 1;
        printf("Enter a Number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }

    return 0;
}