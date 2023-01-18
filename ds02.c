#include <stdio.h>
#include <stdlib.h>
void insert_new();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    int a, b;
    do
    {
        printf("ENTER NEW DATA : ");
        scanf("%d", &b);
        insert_new(b);
        printf(" PRESS 1 TO ENTER NEXT DATA : ");
        scanf("%d", &a);
    } while (a == 1);
    display();
}
void insert_new(int a)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("MEMEORY IS NOT ALLOCATED ");
    }
    else
    {
        temp->data = a;
        temp->next = NULL;
    }

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("NO NODE CREATED .");
    }
    else
    {
        ptr = start;
        printf("DATA OF  NODES ARE : ");
        while (ptr != NULL)
        {

            printf(" %d\t", ptr->data);
            ptr = ptr->next;
        }
    }
}
