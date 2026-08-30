#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<-i+4;j++)
        {
            printf(" ");
        }
        for(j=-i+4;j<=4;j++)
        {
            printf("*");
        }
        for(j=i+4;j>4 && j<=8;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}