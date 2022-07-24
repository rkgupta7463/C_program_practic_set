// As we know that amstronge number is cube of individual number which we will give for input

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int temp , n, a=0,m;
    printf("Enter any number\n");
    scanf("%d",&n);
    
    temp = n;
    
    while(n != 0){
        m = n%10;
        a += m*m*m;
        n=n/10;
    }

    if(temp==a){
        printf("%d , this number is amstronge number",a);
    }else{
        printf("%d , this number is not amstronge number",a);
    }
    
    return 0;
}
