
// ###structure program

#include<stdio.h>

struct first
{
    int Roll_NO;
    char name[50];
    float salary ;
}s1;

void main()
{
    struct  first s1;
    printf("Enter the information of employee\n");
    scanf("%d\n%s\n%f",&s1.Roll_NO,s1.name,&s1.salary);
    printf("Roll No=%d\tName=%s\tSalary=%.2f\n",s1.Roll_NO,s1.name,s1.salary);
    
}