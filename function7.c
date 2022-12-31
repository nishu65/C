#include<stdio.h>
int a,b;
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int min(int a,int b){
    int c;
    c=a-b;
    return c;
}
int mul(int a,int b){
    int c;
    c=a*b;
    return c;
}
int div(int a,int b){
    int c;
    c=a/b;
    return c;
}
int main(){
printf("enter first no :");
scanf("%d",&a);
printf("enter second no :");
scanf("%d",&b);
printf("%d\n",sum(a,b));
printf("%d\n",min(a,b));
printf("%d\n",mul(a,b));
printf("%d\n",div(a,b));
return 0;
}

