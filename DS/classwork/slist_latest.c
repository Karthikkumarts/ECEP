#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
        int data;
        struct node *link;

}slist;
slist * create_node()
{
        slist * new = (slist *) malloc(sizeof(slist));
        printf("enter the value : ");
        scanf("%d",&new->data);
        new->link = NULL;
        return new;
}
void insert_first(slist ** head)
{
        if(*head == NULL)
        {
                slist *new = create_node();
                *head = new;
                return;
        }

        slist *new = create_node();
        new->link = *head;
        *head = new;
}
void insert_last(slist **head)
{
        if(*head == NULL)
        {
                slist *new = create_node();
                *head = new;
                return;
        }
        slist *temp = *head;
        while(temp->link != NULL)
        {
                temp = temp->link;
        }
                slist *new = create_node();
                temp->link = new;
}
void insert_after(slist ** head)
{
        printf("inster after\n");
        if(*head == NULL)
        {
                printf("list empty\n");
                return;
        }
        printf("enter the key : ");
        int key;
        scanf("%d",&key);
        slist * temp = *head;
        while(temp != NULL && temp->data != key)
        {
                temp = temp->link;
        }
        if(temp == NULL)
        {
                printf("key not found\n");
                return;
        }

        slist *new = create_node();
        new->link = temp->link;
        temp->link = new;
}

void insert_before(slist ** head)
{
        if(*head == NULL)
        {
                printf("list empty\n");
                return;
        }
        printf("enter the key : ");
        int key;
        scanf("%d",&key);
        slist * temp = *head;
        slist * prev = NULL;

        if((*head)->data == key)
        {
                insert_first(head);
                return;
        }

        while(temp != NULL && temp->data != key)
        {
                prev = temp;
                temp = temp->link;
        }
        if(temp == NULL)
        {
                printf("key not found\n");
                return;
        }
        slist *new = create_node();
        new->link =prev->link;
        prev->link = new;



}

void delete_first(slist ** head)
{
        if(*head == NULL)
        {
                printf("list is empty\n");
                return;
        }
        slist *temp = *head;
        *head = temp->link;
        free(temp);
}
void delete_last(slist **head)
{
        if(*head == NULL)
        {
                printf("list is empty\n");
                return;
        }
        slist * temp = * head;
        slist *prev = NULL;
        while(temp->link != NULL)
        {
                prev = temp;
                temp = temp->link;
        }
        prev->link = NULL;
        free(temp);


}
void delete_after(slist ** head)
{
        if(*head == NULL)
        {
                printf("list is empty\n");
                return;
        }
        printf("enter the key : ");
        int key;
        scanf("%d",&key);
        slist * temp = *head;
        while(temp != NULL && temp->data != key)
        {
                temp = temp->link;
        }
        if(temp == NULL)
        {
                printf("key was not found\n");
                return;
        }
        if(temp->link == NULL)
        {
                printf("there is nothing after this node\n");
                return;
        }
        slist *node_to_delete = temp->link;
        temp->link = node_to_delete->link;
        free(node_to_delete);
}

void delete_before(slist **head)
{

        if(*head == NULL)
        {
                printf("list is empty\n");
                return;
        }
        printf("enter the key : ");
        int key;
        scanf("%d",&key);
        slist * temp = *head;
        slist * prev = NULL;
        if((*head)->data == key)
        {
                printf("key is head , so nothing to delete before\n");
                return;
        }
        while(temp != NULL && temp->link->data != key)
        {
                prev = temp;
                temp = temp->link;
        }
        prev->link = temp->link;
        free(temp);
}
void sort(slist * head)
{
        slist *i,*j;
        int temp;
        for(i = head ; i != NULL ; i=i->link)
        {
                for(j = i->link ; j != NULL ; j=j->link)
                {
                        if(i->data > j->data)
                        {
                                temp = i->data;
                                i->data = j->data;
                                j->data = temp;
                        }
                }
        }
}
void display(slist * head)
{
        printf("display\n");
        if(head == NULL)
        {
                printf("list empty\n");
                return;
        }
        slist * temp = head;
        while(temp != NULL)
        {
                printf("%d ",temp->data);
                temp = temp->link;
        }
        printf("\n");
}
int main()
{
        slist *head=NULL;
        insert_first(&head);
        insert_first(&head);
        insert_first(&head);
        insert_first(&head);
        display(head);
        //insert_last(&head);
        //display(head);
        //insert_after(&head);
        //insert_before(&head);
        //delete_first(&head);
        //delete_last(&head);

        delete_after(&head);
        display(head);
        delete_before(&head);
        display(head);
        sort(head);
        display(head);

}
