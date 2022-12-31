#include<stdio.h>
int main (){
    int m,ab;
    m=29;
    int *p;
    p=&m;
    printf(" Address of m : %d \n",p);
    printf(" value of m : %d \n ",*p);
    *p=39;
    printf(" address of m : %d \n " ,&m);
    printf(" new value of m : %d \n",m);
    return  0;

}