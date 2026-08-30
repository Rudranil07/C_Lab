#include<stdio.h>

int main(){
    int i,j;
    char s;
    for(i=0;i<10;i++)
    {
        s=65+i;
        for(j=i+1;j>0;j--)
        {
            printf("%c",s);
            s--;
        }
        printf("\n");
    }
    return 0;
}