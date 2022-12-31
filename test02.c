#include <stdio.h>
void f3(int sum,int a){
    if (sum==a){
        printf(" THE NUMBER IS PERFECT NUMBER : %d\n",sum);
    }
    /*else{
        printf("THE NUMBER IS NOT PERFECT NUMBER .\n");
    }*/
}
int f2(int i ,int a){
    if (a%i==0){
       return i ;
    }
    else{
        return 0;
    }
    
}
void f1(int a){
    int sum =0;
    int i=1;
    int x=a/2;
    for (i;i<=x;i++){
        sum=sum+f2(i,a);
       
    }

    f3(sum,a);

}
void f4(int a){
    int b=1;
    for (b;b<=a;b++){
        f1(b);
    }

}
int main(){
    int a;
    int*p=&a;
    printf("ENTER A NO : ");
    scanf("%d",p);
    f4(a);
}