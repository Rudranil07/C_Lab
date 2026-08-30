#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        int a=j;
        for(j=0;j<i;j++)
        { 
            printf("%d",a+1);
            a--;
        }
        printf("\n");
    }
    return 0;
}