#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *prev,*next;
}dlist;

dlist * create_node()
{
	int d;
	scanf("%d",&d);
	dlist * new = (dlist *)malloc(sizeof(dlist));
	new->data=d;
	new->prev=NULL;
	new->next=NULL;
	return new;
}

void dlist_insert_first(dlist **head)
{
	printf("insert firt : ");

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
void dlist_insert_last(dlist **head)
{
	printf(" insert last : ");

	if(*head == NULL)
	{
		*head = create_node();
		return;
	}
	dlist * temp = *head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	dlist *new = create_node();
	temp->next = new;
	new->prev = temp;
}
void dlist_insert_before(dlist **head)
{
	int d;
	printf("enter the key to insert before :");
	scanf("%d",&d);
	if(*head == NULL)
	{
		*head = create_node();
		return;
	}
	printf("insert before : ");

	if((*head)->data == d)
	{
		printf("as key is head hence calling insert first\n");
		dlist_insert_first(head);
		return;
	}
	dlist *temp = *head;

	while(temp->data != d)
	{
		temp = temp->next;
	}
	dlist *new = create_node();
	new->prev = temp->prev;
	new->next = temp;
	temp->prev->next = new;
	temp->prev = new;

}
void dlist_delete_first(dlist **head)
{
	printf("delete first\n");
	if(*head == NULL)
	{
		printf("head is empty");
		return;
	}

	dlist *temp = *head;
	if(temp->next == NULL)
	{
		free(temp);
		*head =NULL;
		return;
	}
	else
	{
		temp->next->prev=NULL;
		*head = temp->next;
		free(temp);
	}
}
void dlist_delete_last(dlist **head)
{
	printf("delete last-----\n");
	if(*head == NULL)
	{
		printf("head is empty");
		return;
	}

	dlist *temp = *head;
	if(temp->next == NULL)
	{
		free(temp);
		*head = NULL;
		return;
	}
	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->prev->next = NULL;
	free(temp);

}

void delete_key(dlist **head)
{
	if(*head == NULL)
	{
		printf("head is NULL");
	}
	
	dlist *temp = *head;
	printf("enter the data you want to delet : ");
	int key;
	scanf("%d",&key);

	if((*head)->data == key)
	{
		if((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return;
		}
		else
		{
			(*head) = temp->next;
			(*head)->prev = NULL;
			free(temp);
			return;
		}
	}

	while(temp->data != key)
	{
		temp = temp->next;
	}
	if(temp->next == NULL)
	{
		dlist_delete_last(head);
		return;
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
}

void reverse(dlist **head)
{
	printf("reverse\n");
	if(*head == NULL)
	{
		printf("head is empty\n");
		return;
	}
	if((*head)->next == NULL)
	{
		printf("head has only 1 node hence no need to reverse\n");
		return;
	}

	dlist *temp ,*current;
	current = *head;
	while(current != NULL)
	{
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	(*head) = temp->prev;

}

void display(dlist *head)
{
	printf("display ----\n");
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
	dlist * head=NULL;
	dlist_insert_first(&head);
	dlist_insert_last(&head);
	dlist_insert_last(&head);
	dlist_insert_first(&head);
	display(head);
	printf("\n");
	/*	dlist_insert_before(&head);
		display(head);
	dlist_delete_first(&head);
	display(head);
	dlist_delete_last(&head);
	display(head);*/

	//delete_key(&head);
	//display(head);
	reverse(&head);
	display(head);

}
