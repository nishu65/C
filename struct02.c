#include<stdio.h>
struct student{
    int roll;
    int phone_no;
};
int main(){
    int a ,b;
    struct student nishu;
    nishu.roll=10;
    nishu.phone_no=56777778;
    printf("nishu roll : %d\n",nishu.roll);
    printf("nishu phone no. : %d\n",nishu.phone_no);
    return 0;
}
