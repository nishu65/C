//max between two numbers  
#include<stdio.h>
int max(int * ,int * );
int main(){
    int a, b;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER :");
    scanf("%d",&b);
    printf(" maximum between %d and %d is %d .",a,b,max(&a,&b));
    return 0;

}
int max(int  *a, int *b){
    if (*a>*b){
        return *a;
    }
    else {
        return *b;
    }
}