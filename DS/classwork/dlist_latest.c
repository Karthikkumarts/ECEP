#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
        int data;
        struct node *prev,*next;
}dlist;
dlist * create_node(void)
{
        dlist * new = (dlist *)malloc(sizeof(dlist));
        printf("enter the value : ");
        int val;
        scanf("%d",&val);

        new->data = val;
        new->prev = NULL;
        new->next = NULL;
        return new;
}
void insert_first(dlist ** head)
{
        dlist * temp = *head;
        if(*head == NULL)
        {
                *head = create_node();
                return;
        }
        dlist *new = create_node();
        new->next = *head;
        (*head)->prev = new;
        *head = new;
}
void insert_last(dlist **head)
{
        dlist * temp = *head;
        if(*head == NULL)
        {
                *head = create_node();
                return;
        }
        while(temp->next != NULL)
        {
                temp = temp->next;
        }
        dlist *new = create_node();
        temp->next = new;
        new->prev = temp;


}

void insert_after(dlist ** head)
{
        dlist * temp = *head;
        if(*head == NULL)
        {
                printf("list is empty");
                return;
        }
        int key;
        printf("enter the key\n");
        scanf("%d",&key);

        while(temp != NULL && temp->data != key)
        {
                temp = temp->next;
        }
        if(temp == NULL)
        {
                printf("key was not found\n");
                return;
        }
        dlist * new = create_node();
        new->prev = temp;
        new->next = temp->next;
        if(temp->next != NULL)
                temp->next->prev = new;
        temp->next = new;


}

void insert_before(dlist ** head)
{
        dlist *temp = *head;
        if(*head == NULL)
        {
                printf("list is empty\n");
                return;
        }
        int key;
        printf("enter the key\n");
        scanf("%d",&key);

        while(temp != NULL && temp->data != key)
        {
                temp=temp->next;
        }
        if(temp == NULL)
        {
                printf("no key found\n");
                return;
        }

        dlist * new = create_node();
        new->next =temp;
        new->prev= temp->prev;
        if(temp->prev != NULL)
                temp->prev->next = new;
        else
                *head = new;
        temp->prev = new;
}

void delete_first(dlist ** head)
{
        if(*head == NULL)
        {
                printf("head is null\n");
                return ;
        }
        dlist * temp = *head;
        *head = temp->next;
        (*head)->prev = NULL;
        free(temp);
}
void delete_last(dlist *head)
{

        if(head == NULL)
        {
                printf("head is null\n");
                return ;
        }

        dlist *temp = head;
        while(temp->next != NULL)
        {
                temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
}
void delete_after(dlist ** head)
{
        if(*head == NULL)
        {
                printf("head is NULL\n");
                return;
        }
        int key;
        printf("enter the key\n");
        scanf("%d",&key);

        dlist * temp = *head;
        while(temp != NULL && temp->data != key)
        {
                temp = temp->next;
        }
        if(temp == NULL)
        {
                printf("nothing to delete\n");
                return;
        }
        if(temp->next != NULL)
        {
        dlist * delete = temp->next ;
        temp->next = temp->next->next;
        free(delete);
        }



}
void delete_before(dlist ** head)
{
        printf("delete_before\n");
        if(*head == NULL)
        {
                printf("head is NULL\n");
                return;
        }
        int key;
        printf("enter the key\n");
        scanf("%d",&key);
        dlist * temp = *head;
        while(temp != NULL && temp->data != key)
        {
                temp = temp->next;
        }
        if(temp == NULL)
        {
                printf("key not found\n");
                return;
        }
        if((*head)->data == key)
        {
                printf("nothing to delete before head\n");
                return;
        }

        if(temp->prev == *head)
        {
                printf("temp->prev = head\n");
                dlist * he = temp->prev;
                temp->prev = NULL;
                *head = temp;
                free(he);
                return;
        }

        dlist * previous = temp->prev;
        previous->prev->next = temp;
        temp->prev = previous->prev;
        free(previous);

        printf("delete_before end\n");
}

void delete_key(dlist ** head)
{

        if(*head == NULL)
        {
                printf("head is NULL\n");
                return;
        }
        int key;
        printf("enter the key\n");
        scanf("%d",&key);
        dlist * temp = *head;
        while(temp != NULL && temp->data != key)
        {
                temp = temp->next;
        }
        if(temp == NULL)
        {
                printf("key not found\n");
                return;
        }
        if((*head)->data == key)
        {
                *head = temp->next;
                temp->prev = NULL;
                free(temp);
                return;
        }

                temp->prev->next = temp->next;
        if(temp->next != NULL)
        temp->next->prev = temp->prev;
        free(temp);
}
void display(dlist * head)
{
        if(head == NULL)
        {
                printf("list is empty\n");
                return;
        }
        dlist *temp = head;
        while(temp != NULL)
        {
                printf("%d->",temp->data);
                temp = temp->next;
        }
        printf("NULL\n");
}
int main()
{
        dlist * head =NULL;
        insert_first(&head);
        insert_last(&head);
        insert_last(&head);
        insert_last(&head);
        insert_last(&head);
        display(head);
/*      display(head);
        insert_after(&head);*/
//      insert_before(&head);
        //delete_first(&head);
        //delete_last(head);
        //delete_after(&head);
        //display(head);
        //delete_before(&head);
        delete_key(&head);
        display(head);
}
