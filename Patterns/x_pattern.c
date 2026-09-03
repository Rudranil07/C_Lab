#include<stdio.h>

int main()
{
    int i,j;
    for(i=0;i<=8;i++)
    {
        for(j=0;j<i;j++)
            if (j==-i+8)
                printf("*");
            else    
                printf(" ");
        for(j=i;j<=i;j++)
            printf("*");
        for(j=i+1;j<-i+8;j++)
            printf(" ");
        for(j=-i+8;j<=-i+8 && i<=3;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}