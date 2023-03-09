#include<stdio.h>
int main (){
    char a,b,c;
    for(a='A';a<='E';a++)
    {
        for(b='A';b<=a;b++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
