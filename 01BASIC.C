#include <stdio.h>
int main()
{
    int a;
    int b;  
   
    printf("ENTER FIRST NO. :  ");
    scanf("%d", &a); 
    printf("ENTER SECOND NO. :  ");
    scanf("%d", &b);
    int c = a + b;
    printf("SUM OF %d AND  %d IS : ", a, b);
    printf("%d  ", c);
    printf("%p",c);
    return 0;
}
