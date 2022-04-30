#include<stdio.h>

union first
{
    int a;
    char b;
    float c;
};

void main()
{
    union first u;
    union first *ptr=&u;
    u.a = 1;  
    u.b ='a';
    // u.c =89;
    // printf("RollN: %d\t Name: %s\tMath: %.2f\n",u.a,u.b,u.c);
    printf("RollN: %d\t Name: %s\t",u.a,u.b);
}
