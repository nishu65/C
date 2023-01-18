#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void second_node();
void third_node();
void insert_begin();
void last_pre();
void delete_begin();
void delete_last();
void insert_pos();
void delete_pos();
struct node
{
    int data;
    struct node *link;
};
struct node *start = NULL;
int main()
{
    create();
    second_node();
    third_node();
    insert_begin();
    last_pre();
    display();
    delete_begin();
    delete_last();
    insert_pos();
    delete_pos();
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
        printf("\n");
    }
}
void second_node()
{
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("memory is not avialable");
    }
    else
    {
        printf("ENTER SECOND DATA : ");
        scanf("%d", &temp->data);
        temp->link = NULL;
    }

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
void third_node()
{
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("MEMORY NOT ALLOCATED ");
    }
    else
    {
        printf("ENTER NEW DATA FOR NODE : ");
        scanf("%d", &temp->data);
        temp->link = NULL;
    }
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
void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("memory is not allocated ");
    }
    else
    {
        printf("ENTER A NODE DATA TO INSERT AT BEGINNIG : ");
        scanf("%d", &temp->data);
        temp->link = start;
        start = temp;
    }
}
void last_pre()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("MEMORY NOT ALLOCATED ");
    }
    else
    {
        printf("ENTER LAT_PRE NODE DATA :");
        scanf("%d", &temp->data);
    }
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->link->link != NULL)
        {
            ptr = ptr->link;
        }
        temp->link = ptr->link;
        ptr->link = temp;
    }
}
void delete_begin()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("LIST IS EMPTY ");
    }
    else
    {
        ptr = start;
        start = start->link;
        printf("THE DLETEING ELEMENT IS : %d \n", ptr->data);
    }
    free(ptr);
    display();
}
void delete_last()
{
    struct node *ptr, *temp;
    if (start == NULL)
    {
        printf("LIST IS EMPTY");
    }
    else
    {
        ptr = start;
        while (ptr->link != NULL)
        {
            temp = ptr;
            ptr = ptr->link;
        }
        temp->link = NULL;
        printf("THE DELETING ELEMENT IS : %d \n", ptr->data);
        free(ptr);
        display();
    }
}
void insert_pos()
{
    struct node *temp, *ptr;
    int pos, i;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("MEMORY IS NOT ALLOCATED");
    }
    else
    {
        printf("ENTER POSITION FOR INSERTING :");
        scanf("%d", &pos);
        printf("ENTER THE NODE DATA TO INSERT AT POS %d : ", pos);
        scanf("%d", &temp->data);
        temp->link = NULL;
        if (pos == 0)
        {
            temp->link = start;
            start = temp;
        }
        else
        {
            for (i = 0, ptr = start; i < pos - 1; i++)
            {
                ptr = ptr->link;
                if (ptr == NULL)
                {
                    printf("POSITION NOT FOUND");
                    return;
                }
            }
            temp->link = ptr->link;
            ptr->link = temp;
        }
    }
    display();
}
void delete_pos()
{
    int i, pos;
    struct node *temp, *ptr;
    if (start == NULL)
    {
        printf("The List is Empty:");
        exit(0);
    }
    else
    {
        printf("Enter the position of the node to be deleted:");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = start;
            start = start->link;
            printf("The deleted element is:%d", ptr->data);
            free(ptr);
        }
        else
        {
            ptr = start;
            for (i = 0; i < pos; i++)
            {
                temp = ptr;
                ptr = ptr->link;
                if (ptr == NULL)
                {
                    printf("Position not Found:");
                    return;
                }
            }
            temp->link = ptr->link;
            printf("The deleted element is:%d", ptr->data);
            free(ptr);
        }
        display();
    }
}
