#include <stdio.h>
#include <string.h>
/*int* per(int *p){
     char b=*p;
     p=p+1;
    if (*(p+3))=="d"){
        return (&a[0]);
    }
    else{
        per();
    }
}*/
void main(){
    char *b;
    char a[]="abcd";
    b=a;
    printf("%d",b);
    char c=*a;
    int n =strlen(a);
    printf(" lenth of string is : %d \n",n);
    for (int i =0;i<n;i++){
        *(b+i)=*(b+i+1);
    }
    *(b+3)=c;

    printf("%s ",a);
        
}