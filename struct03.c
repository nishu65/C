 #include<stdio.h>
 struct student{
    int roll;
    int age;
 };
 int main(){
    struct student *niraj;
    (*niraj).roll=21133;
    (*niraj).age=22;
    printf("niraj roll :%d\n",(*niraj).roll);
    printf("niraj age :%d\n",(*niraj).age);
    return 0;

 }