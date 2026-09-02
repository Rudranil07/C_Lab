#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<-i+4;j++)
            printf(" ");
        for(j=-i+4;j<=-i+4;j++)
            printf("*");
        for(j=-i+5;j<i+4;j++)
            printf(" ");
        for(j=i+4;j<=i+4 && i>0;j++)
            printf("*");
        printf("\n");
    }
    for(i=5;i<=8;i++)
    {
        for(j=0;j<i-4;j++)
            printf(" ");
        for(j=i-4;j<=i-4;j++)
            printf("*");
        for(j=i-3;j<-i+12;j++)
            printf(" ");
        for(j=-i+12;j<=-i+12 && i<8;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}