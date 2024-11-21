#include <stdio.h>

void biggest2()
{
    int x, y;
    printf("Enter the two numbers \n");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        printf("%d is greater than %d\n", x, y);
    }
    else
    {
        printf("%d is greater than %d\n", y, x);
    }
}
