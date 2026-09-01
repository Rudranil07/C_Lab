#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=i;j<=-i+8;j++)
            printf("*");
        printf("\n");
    }
    for(i=5;i<=9;i++)
    {
        for(j=0;j<=-i+8;j++)
            printf(" ");
        for(j=-i+9;j<=i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}