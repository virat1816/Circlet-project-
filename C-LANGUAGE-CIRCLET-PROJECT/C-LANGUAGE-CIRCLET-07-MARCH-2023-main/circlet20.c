#include <stdio.h>
int main()
{
    int i,j;
    int a=4,b=4;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(a==j || b==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
            a--;
            b++;
    }
    return 0;
}
