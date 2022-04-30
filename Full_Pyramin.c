#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,k=0;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++,k=0)
    {
        for ( j = 1; j <= n-i; j++,k=0)
        {
            printf(" ");
        }
        while (k!=2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
        
    return 0;
}
