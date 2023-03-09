#include<stdio.h>
int main (){
    int a,b,c;
        for(a=1;a<=5;a++)
    {
        for(c=a;c<5;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
        }
        for(a=2;a<=5;a++)
        {
        for(c=a;c>1;c--)
        {
            printf(" ");
        }
        for(b=a;b<=5;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
