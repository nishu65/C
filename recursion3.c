#include<stdio.h>
int func(int a,int b){
    if (a<b){
        return a+b;
    
    }
    else{
        return 1+func(a-1,b+1);
    }
}
int main(){

    
    printf("%d",func(4,2));
    return 0;
}