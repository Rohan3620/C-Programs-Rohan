#include<stdio.h>

int main() {
    int r,i,j,a;
    printf("Enter input : ");
    scanf("%d",&r);
    a=r;
    for(i=1;i<=r;i++){
        for(j=1;j<=a;j++){
            printf("%d ",j);
            
        }
        a--;
        printf("\n");
    }
    return 0;
}