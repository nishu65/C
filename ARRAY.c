#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,size;
    printf ("enter range : ");
    scanf("%d",&size);
    ptr= (int*)malloc(sizeof(int));
    if (ptr==NULL){
        printf ("memory is not allocated \n");
    }
    else{
        printf("meomry is allocated\n");
    }
    for (int i=0;i<size;i++){
        ptr[i]=i+1;
    }
    for(int c=0;c<size;c++){
        printf("enter value at %d index : ",c);
        scanf("%d",&ptr[c]);
    }
     printf("DISPLAYING THE VALUE OF ARRAY  \n ");
    //transversing all element of array: and address of all element.
    for (int a=0;a<size;a++){

        printf("ptr[%d] = %d \n " ,a,ptr[a]);
        int *x = &ptr[a];
        printf( "address of ptr[%d] : %d \n",a,x);
    }


free(ptr);


}
    
    
    
    
    
    
    
    
    
    /*int a,b;
    //printf("ENTER RANGE OF ARRAY : ");
    //scanf("%d",&i);
    int arr[5];
    for(b=0;b<=6;b++){
        printf("enter value at %d index : ",b);
        scanf("%d",&arr[b]);

    }
    printf("DISPLAYING THE VALUE OF ARRAY : { ");
    //transversing all element of array:
    for (a=0;a<=6;a++){

        printf("%d\t",arr[a]);
    }

printf("}"); */




