#include<stdio.h>

int f2(int a){
    int b=0;
    b=b+5;
   
    printf("%d\n",a*b);
     return a*b;
}
int f1(int a){
    int b;
    b=f2(a);
    
    printf("%d\n",a*b);
    return a*b;
}
int main(){
    int a=5,b=4;
    for(int i =0;i<2;i++){
        b=b-(f1(a)-f2(a));
        printf("%d\t",b);

    }
    return 0;
}