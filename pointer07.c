#include<stdio.h>
int main (){
    int a;
    printf(" Enter size of array : ");
    scanf("%d",&a);
    int arr[a];
    int *p;
    p=arr;
    for (int i=0;i<a;i++){
        printf("enter value of arr[%d]  :",i);
        scanf("%d",p);
        p=p+1;
    }
    p=arr;
    printf("array  [");
    for (int i=0;i<a;i++){
        printf("%d , ",*p);
        p=p+1;

    }
    printf("]");
    return 0;

}