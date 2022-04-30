#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("A ",j);
        }
        printf("\n");
        /* code */
    }
    printf("THIS IS HALF PRIMIND TRANGLE");

    return 0;
}
