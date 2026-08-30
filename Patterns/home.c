#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 7-1; i++)
    {
        for(j = 1; j <= -i + 6-1; j++)
            printf(" ");

        for(j = -i + 7-1; j <= 7-1; j++)
            printf("* ");

        printf("\n");
    }
    for(i=6;i<=11;i++)
    {
        for(j=1;j<=10;j++)
        {
            if (j==1 || j==10)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
        if (i==11)
        {
            for(j=1;j<=11;j++)
                printf("*   ");
        }
    }
    return 0;
}