#include<stdio.h>
int r(int num){
    return --num;
}
int main(){
    int n=4;
    for(r(n);r(n++);r(n--))
        printf("%d\t",r(--n));
    
    return 0;
}