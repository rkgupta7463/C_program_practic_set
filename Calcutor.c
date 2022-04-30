#include <stdio.h>

int main()
{
    int n, m, res;
    char op;

    printf("Enter ur choice(+,-,*,/): ");
    scanf("%c", &op);

    printf("Enter the two digit : ");
    scanf("%d %d", &n, &m);

    switch (op)
    {
    case '+':
        res = n+m;
        printf("Add : %d", res);
        break;
    case '-':
        res = n-m;
        printf("Sub : %d", res);
        break;
    case '*':
        res = n*m;
        printf("Multiple : %d", res);
        break;
    case '/':
        res = n/m;
        printf("Divide : %d", res);
        break;

    case '%':
        res = n%m;
        printf("Reminder : %d", res);
        break;

    default:
        printf("Sorry , Invalid choice\n");
        break;
    }
    return 0;
}