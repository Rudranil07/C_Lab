#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<=6;i++)
    {
        for(j=1;j<=5;j++)
        { 
            if(i==0 || i==6)
            printf("* ");
            else if(j==1 || j==5)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}