#include<stdio.h>
int main (){
    int a[5]={5,10,15,20,25};
    printf("%u\t",&a);
    printf("%u\t",*(1+a));
    printf("%u\t",&a);
    printf("%u\t",&a+1);
    return 0;
}