#include <stdio.h>
void f(int n)
{
    switch (n << 1 + n)
    {
    default:
        printf("sresth");
    case 4:
        printf("prakram");
    case 3:
        printf("2024");
        break;
    case 2:
        printf("2025");
    }
}
int main()
{
    f(1);
    return 0;
}