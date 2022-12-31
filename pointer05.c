//sum of two numbers using pointer and product of two  using function 


#include <stdio.h>
int sum(int *, int *);
int pro(int ,int );
int main(){
    int a ,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("sum of  %d and %d = %d\n",a,b,sum (&a,&b));
    printf("product of %d and %d = %d\n",a,b,pro(*(&a),*(&b)));
}
int sum(int *a,int *b){
    int c;
    c= *a+*b;
    return c;
}
int pro(int a,int b){
    int c;
    c= a*b;
    return c;
}