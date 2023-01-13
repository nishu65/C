#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void insert_begin();
struct node
{
    int data;
    struct node *link;
};
struct node *start = NULL;
int main()
{
    create();
   
    insert_begin();
     display();
}
void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("MEMORY IS NOT ALLOCATED .");
        exit(0);
    }
    printf("INPUT THE DATA VALUE FOR NODE: ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("List is empty:");
        return;
    }
    else
    {
        ptr = start;
        printf("The List elements are: ");
        while (ptr != NULL)
        {
            printf(" %d\t", ptr->data);
            ptr = ptr->link;
        }
    }
}
void insert_begin(){
    struct node *ptr,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if (temp==NULL){
        printf("memory is not avialable");
    }
    else{
        printf("ENTER SECOND DATA : ");
        scanf("%d",&temp->data);
        temp->link=NULL;
    }
    
    if (start==NULL){
        start=temp;
    }
    else {
        ptr=start;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;
    }

}