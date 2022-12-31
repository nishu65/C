#include<stdio.h>
int main (){

    int array[5];
    array[0]=5;
    array[1]=4;
    array[2]=6;
    array[3]=7;
    array[4]=3;

    printf(" %d \n ", array) ;//print address of first element of array;
    printf(" %d \n ", &array+1);// print next array address;
    printf(" %d \n ", *array);// print value at address of array;
    int *p;
    p=array+4;///p take address o f a[4];
   
    printf(" %d \n ", p);//print address of last element;
    
    //printing value of array using pointer;
    p= array;
    for (int i =0; i <5;i++){
        printf(" value at a[%d] = %d\n",i,*p);
        p++;
    }
    return 0;
}