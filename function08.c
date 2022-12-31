#include<stdio.h>
void bet(int a){
    printf("SUB :%d\n",a);
}
int sub(int a,int b){
    int c =a-b;
    return c;
}
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b;
    printf("ENTER TWO NUMBER TO ADD AND SUBTRACT :");
    scanf("%d %d",&a,&b);
    int c= add(a,b);
    bet(sub(a,b));
    printf("ADD :%d\n",c);
    return 0;
}