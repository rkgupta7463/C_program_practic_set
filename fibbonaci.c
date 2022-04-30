#include<stdio.h>

int main()
{
    int a=0,b=1,c,r;
    printf("Enter the number: ");
    scanf("%d",&r);
    printf("%d %d ",a,b);
    for (int i = 2; i < r; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }        
    return 0;
}
