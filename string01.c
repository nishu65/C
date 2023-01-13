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
    char c=*a;
    int n =strlen(a);
    printf(" lenth of string is : %d \n",n);
    for (int i =0;i<n;i++){
        *(b+i)=*(b+i+1);
        printf("%s\n",a);
    }
    

    printf("%s ",a);
        
}