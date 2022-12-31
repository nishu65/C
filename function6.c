#include<stdio.h>
void f1(int a,int b){
    int c;
    c=a;a=b;b=a;

}
void f2(int *a,int *b){
    int c;
    c=*a;*a=*b;*b=c;

}
int main(){
    int a=4,b=5,c=6;
    f1(a,b);
    f2(&a,&b);
    printf("%d",c-a-b);
    return 0;
}