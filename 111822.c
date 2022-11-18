#include <stdio.h>

void sum(int a, int b, int c);

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum(a, b, c);
}

void sum(int a,int b, int c)
{
    if((a == b) && (a == c) && (b == c))
    {
        printf("Числа %d и  %d, %d", a, b, c);
    }
    else if((a > b) && (a > c))
    {
        printf("Max>>>> %d", a);
    }
    else if((b > a) && (b > a))
    {
        printf("Max>>>> %d", b);
    }
    else if((c > a) && (c > b))
    {
        printf("Max>>>> %d", c);
    }
}