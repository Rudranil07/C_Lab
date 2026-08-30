#include<stdio.h>

int main(){
    int i,j;
    char s=65;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=-i+5;j++)
        {
            printf(" ");

        }
        s=65;
        for(j=-i+6;j<=6;j++)
        {
            printf("%c",s);
            s++;
        }
        printf("\n");
    }
    return 0;
}