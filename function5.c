#include<stdio.h>
int f(int a){
    int b;
    b=a+5;
    return b;
}
int main(){
    int a= 5;
    f(a);
    printf("%d",f);
    return 0;
}