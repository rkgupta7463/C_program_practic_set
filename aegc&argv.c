
// ###argc and argv topic

#include<stdio.h>

int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        printf("The arguments supplied is %s\n",argv[1]);
    }
    else if (argv > 2)
    {
        printf("Too many argument supplied\n");
    }
    else
    {
        printf("One argument expected\n");
    }
}

