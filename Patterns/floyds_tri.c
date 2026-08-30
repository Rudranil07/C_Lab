#include<stdio.h>

int main(){
    int i,j,a;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%d ",a+1);
            a++;
        }
        printf("\n");
    }
    return 0;
}