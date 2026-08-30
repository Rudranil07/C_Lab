#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=-i+4;j++)
        {
            printf(" ");
        }
        for(j=-i+4;j<=4;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=5;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
