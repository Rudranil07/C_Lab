#include <stdio.h>
#include <math.h>

int main(){
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j <= 4 - sqrt(16 - pow(sqrt(-(i - 4)), 4));j++)
            printf("* ");
        printf("\n");
    }
    for(i=5;i<=8;i++)
    {
        for(j=0;j <= -4 - sqrt(16 - pow(sqrt((i - 4)), 4));j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}