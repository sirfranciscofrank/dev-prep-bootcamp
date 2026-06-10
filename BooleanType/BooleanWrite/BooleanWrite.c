#include <unistd.h>

int main(void)
{
    int x;
    int y;

    x = 0;
    y = 1;
    if (x)
    {
        write(1, "x is true!\n", 11);
    }
    else
    {
        write(1, "x is false!\n", 12);
    }
    if (y)
    {
        write(1, "y is true!\n", 11);
    }
    else
    {
        write(1, "y is false!\n", 12);
    }
    return (0);
}
