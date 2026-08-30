#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i+1;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=4;i<=6;i++)
    {
        for(j=1;j<=5;j++)
        {
            if (j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}