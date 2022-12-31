#include <stdio.h>
int fun1(int *);
void fun2(int, int);
int main()

{
    int a, b;
    printf("ENTER A NO TO CHECK : ");
    scanf("%d", &a);
    int *c;
    c = &a, b = *c;
    int z = fun1(c);
    fun2(z, b);
}
int fun1(int *p)
{
    int rev = 0, r;
    int i = *p;
    for (; i != 0;)
    {
        r = i % 10;
        rev = rev * 10 + r;
    }
    printf("%d", rev);
    return (rev);
}
void fun2(int x, int y)
{
    if (x == y)
    {
        printf("NUMBER IS PERLINDROME ");
    }
    else
    {
        printf("NUMBER IS PERLINDROME ");
    }
}

//............................................using function...........................................
/*
int func(int);
int main()
{
    int a,b;
    printf("ENTER A NO. TO CHECK  : ");
    scanf("%d", &a);
    b=a;
    b= func(b);
     if (b==a){
        printf("THE NUMBER IS PALINDROME .\n");
        printf(" REVERSE NO. = %d", b);
    }
    else{
        printf("THE NUMBER IS NOT PALINDROME .\n");
        printf(" REVERSE NO. = %d",b);
    }
}
int func(int a){
    int rev =0;
     for (; a!= 0; )
    {

        int r;
        r = a % 10;
        a = a / 10;
        rev =( rev * 10) + r;
    }
    return rev;
}*/

//..............................palindrome using for loop ...................................
/*
void main()
{

    int a;
    printf("ENTER A NO. TO PRINT REVERSE : ");
    scanf("%d", &a);
    int rev=0;
    int b=a;
    for (; a!= 0; )
    {

        int r;
        r = a % 10;
        a = a / 10;
        rev =( rev * 10) + r;
    }
    if (b==rev){
        printf("THE NUMBER IS PALINDROME .\n");
        printf(" REVERSE NO. = %d", rev);
    }
    else{
        printf("THE NUMBER IS NOT PALINDROME .\n");
        printf(" REVERSE NO. = %d", rev);
    }
}*/