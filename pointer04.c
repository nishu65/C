#include <stdio.h>
int main()
{
    int m = 300;
    float f = 300.3033;
    char c = 'z';

    // printing address of all ;using &;
    printf(" Address of m : %d \n", &m);
    printf("Addresss of f : %d\n ", &f);
    printf("Address of c : %d \n", &c);

    // printing value using * and &;
    printf(" Value of m : %d \n ", *(&m));
    printf("Value of f : %f \n", *(&f));
    printf("Value of c : %c \n", *(&c));

    /// printing value of all usinng pointer ;
    int *p;
    p = &m;
    printf("Value at m :%d\n ", *p);
    printf("Address of m: %d\n", p);
    float *p1;
    p1 = &f;
    printf("Value  at f : %f \n", *p1);
    printf("Address of f : %d\n", p1);
    char *p2;
    p2 = &c;
    printf("Value at c : %c\n", *p2);
    printf("Address of c : %d \n", p2);
    return 0;
}