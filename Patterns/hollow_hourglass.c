#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<=8;i++)
    {
        if(i==0 || i==8)
        {
            for(int a=1;a<=9;a++)
                printf("*");
        }
        else
        {
            for(j=1;j<i;j++)
                printf(" ");
            for(j=i;j<=i && i<=8;j++)
                printf("*");
            printf("\n");
        }

    }
    return 0;
}