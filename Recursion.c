#include<stdio.h>

long fact(int n){
if(n==0){
    return 1;
}
else
return (n*fact(n-1));
}
void main()
{
    int num;
    long f;
    printf("Enter the number: ");
    scanf("%d",&num);
    f=fact(num);
    printf("Factorial number of %d is %d",num,f);
}