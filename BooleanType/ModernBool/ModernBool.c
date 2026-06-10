#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool    x;
    bool    y;

    x = false;
    y = true;
    if (x)
    {
        printf("x is true!\n");
    }
    else
    {
        printf("x is false!\n");
    }
    if (y)
    {
        printf("y is true!\n");
    }
    else
    {
        printf("y is false!\n");
    }
    return (0);
}
