#include<stdio.h>

int main(){
    int i,j;
    for (i=0;i<=6;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i+1;j++)
            {
                if(j%2==0)
                printf("0");
                else
                printf("1");
            }
        }
        else
        {
            for(j=1;j<=i+1;j++)
            {
                if(j%2==0)
                printf("1");
                else
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}