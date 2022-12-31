#include<stdio.h>
void f(int *p, int n);
void func(int (*ptr) [2]);
int main(){
   /* int a[5]={5,3,1,2,4};
    int *p[5]={a,a+1,a+3,a+2,a+4};
    printf("%u\t%u", p[3][1],*(*(p+4)-2));
    return 0;
     
 int a[]={2, 4, 6};
 int b[]={1, 3, 5};
 int *arr[]={a, b};
 printf("%u\t", *(*(arr+1)+2));//line 1
 printf("%u\t",**arr+3);//line 2
 printf("%u",**arr);//line 3
 return 0;


 int arr[5]={1,2,3,4,5};
 f(arr,5);


}
void f(int *p, int n)
{
static int i;
 i=n-1;
if(i<0) return;
printf("%d\t", p[i]+p[n-i-1]);
f(p,n-1);
}

int a[5]={5, 3, 1, 2, 4};
 int *p[5]={a+3, a+1, a, a+2, a+4};
 int **ptr=p+3;
 printf("%u\t%u\t%u", ptr-p, *ptr-a, **ptr);
 return 0;*/

int arr[2][2]={0,1,2,3};
func(arr);



}
void func(int (*ptr) [2])
{
 **ptr+=1;
 ptr++;
 **ptr*=3;
}

