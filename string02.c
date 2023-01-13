#include <stdio.h>
#include<stdlib.h>
int f(char *p)
{
    int sum = 0;
    for (int a=0;*p!='\0'; a++)
    {
        sum++;
        p=p+1;
    }
    return (sum);
}
int main()
{
    char a[100];
    printf("ENTER STRING : ");
    scanf("%s", a);
    // printf("%s",a);
    printf(" TOTAL CHARACTERS COUNT : %d \n", f(a));
    system("pause");
    return 0;
}