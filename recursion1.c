#include<stdio.h>
void f(int n){
    static int i=3;
    
    if (n%2){
        n+=i--;
        printf("%d\t",n);
        f(n-1);
    }
    n++;
    printf("%d\t",n);
}
int main(){
    f(5);
    return 0;

}