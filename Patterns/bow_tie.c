#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<=8;i++)
    {
        for(j=0;j<=i && j<=-i+8;j++)
            printf("*");
        // for(j=i+1 || j==-i+9;j<-i+8 && j<i;j++)
        //     printf(" ");
        // for(j=-i+8;j>=-i+8 && j>=i && j<=8;j++)
        //     printf("*");
        printf("\n");
    }
    return 0;
}