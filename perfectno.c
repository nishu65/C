#include <stdio.h>
#include<stdlib.h>
void f3( unsigned long int sum,unsigned long int a){
    if (sum==a){
        printf(" THE NUMBER IS PERFECT NUMBER : %lu\n",sum);
    }
    /*else{
        printf("THE NUMBER IS NOT PERFECT NUMBER .\n");
    }*/
}
int f2(unsigned long int i ,unsigned long int a){
    if (a%i==0){
       return i ;
    }
    else{
        return 0;
    }
    
}
void f1(unsigned long int a){
     unsigned long int  sum =0;
     unsigned long int i=1;
    unsigned long int x=a/2;
    for (i;i<=x;i++){
        sum=sum+f2(i,a);
       
    }

    f3(sum,a);

}
void f4(unsigned long int a){
    unsigned long int b=1;
    for (b;b<=a;b++){
        f1(b);
    }

}
int main(){

    unsigned long int a;
    unsigned long int *p=&a;
    printf("ENTER A RANGE [0 TO N] TO CHECK  HOW MANY PERFECT NUMBER PRESENT : "); 
    scanf("%lu",p);
    f4(a);
    printf("FOR EXIT ");
    system("pause");
    return 0;
}