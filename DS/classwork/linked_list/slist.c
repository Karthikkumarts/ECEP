#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}slist;


slist * create_new_node()
{
    slist * create = (slist * )malloc(sizeof(slist));
    scanf("%d",&create->data);
    create->link = NULL;
}
void slist_insert_first(slist ** head)
{
    printf("enter the number which needs to be inserted first : ");
    if(*head == NULL)
    {
	*head = create_new_node();
	return;
    }
    slist *new = create_new_node();
    new->link = *head;
    *head = new;
}
void slist_insert_last(slist ** head)
{
    printf("enter the number which needs to be inserted last : ");
    slist *temp = NULL;
    temp = *head;
    if(*head == NULL)
    {
	*head = create_new_node();
	return;
    }
    printf("\nhi \n");
    while(temp->link != NULL)
    {
	printf("hello\n");
	temp = temp->link;
    }
    slist *new = create_new_node();
    temp->link = new;
}
void slist_insert_after(slist ** head)
{
    int key;
    printf("enter the insert after kwy : ");
    scanf("%d",&key);
    printf("enter the number which needs to be inserted after %d : ",key);
    slist *temp = NULL;
    temp = *head;
    if(*head == NULL)
    {
	printf("slist is empty");
	return;
    }
    while(temp->data != key)
    {
	temp = temp->link;
    }
    slist *new = create_new_node();
    new->link = temp->link;
    temp->link = new;
}

void slist_insert_before(slist ** head)
{
    int key;
    printf("enter the insert before key : ");
    scanf("%d",&key);
    printf("enter the number which needs to be inserted before %d : ",key);
    slist * temp = *head;
    temp = *head;
    slist *prev;
    if(*head == NULL)
    {
	printf("slist is empty");
	return;
    }
    while(temp->data != key)
    {
	prev = temp;
	temp = temp->link;
    }
    slist *new = create_new_node();
    new->link = prev->link;
    prev->link = new;
}

void display(slist *head)
{
    slist *temp = NULL;
    temp = head;
    while(temp != NULL)
    {
	printf("%d->",temp->data);
	temp = temp->link;
    }
    printf("NULL\n");
}
void slist_delete_first(slist **head)
{
    slist *temp = NULL;
    temp = *head;
    if(*head == NULL)
    {
	printf("linked list empty");
	return;
    }
    *head = temp->link;
    free(temp);

}
void slist_delete_last(slist ** head)
{
    slist *temp = NULL;
    temp = *head;
    slist *prev;
    if(*head == NULL)
    {
	printf("linked list empty");
	return;
    }
    while(temp->link != NULL)
    {
	prev = temp;
	temp = temp->link;
    }
    free(temp);
    prev->link = NULL;
}
void slist_delete_after(slist ** head)
{
    int key;
    printf("enter the delete after key : ");
    scanf("%d",&key);
    slist *temp = NULL;
    temp = *head;
    slist *prev;
    if(*head == NULL)
    {
	printf("linked list empty");
	return;
    }
    while(temp->data != key)
    {
	prev = temp;
	temp = temp->link;
    }
    prev->link = temp->link;
    free(temp);
}
void slist_delete_before(slist ** head)
{
    int key;
    printf("enter the delet before key : ");
    scanf("%d",&key);
    slist *temp = NULL;
    temp = *head;
    slist *prev,*prevofprev=NULL;
    if(*head == NULL)
    {
	printf("linked list empty");
	return;
    }
    while(temp->data != key)
    {
	prevofprev = prev;
	prev = temp;
	temp = temp->link;
    }
    prevofprev->link=temp;
    free(prev);
}
void slist_reverse(slist* * head)
{
    slist *next,*prev,*current;
    prev = 0;
    next =current = *head;
    while(next != 0)
    {
	next = next->link;
	current->link=prev;
	prev = current;
	current = next;
    }
    *head = prev;
}
int main()
{
    slist *head = NULL;
    slist_insert_first(&head);
    slist_insert_last(&head);
   /* display(head);
    slist_insert_after(&head);
    slist_insert_before(&head);
    display(head);
    slist_delete_first(&head);
    slist_delete_last(&head);
    display(head);
    slist_insert_first(&head);
    slist_insert_first(&head);
    display(head);
    slist_delete_before(&head);
    display(head);
    slist_delete_after(&head);*/
    slist_insert_last(&head);
    slist_insert_last(&head);
    slist_insert_last(&head);
    display(head);
slist_reverse(&head);
    display(head);
    

}
