#include"slist.h"
void slist_insert_last(slist_t * *head,int val) //passing the address of the pointer hence  **(double pointer)[slist * is datatype and *head is done because we are passing add of head]
{

    if(*head == NULL) //list is empty
    {
//	printf("%p\n",*head);
        *head=slist_create_node(val); //making new node first node and passing add of ptr to head
//	printf("%p\n",*head);
	return ;
    }
    slist_t *temp = *head;
    while(temp->link != NULL)
    {
	temp = temp->link; //last node link
    }
    slist_t *new=slist_create_node(val); //here we will create a new node
    temp->link=new; //here the add will be passed to prev link
   // temp->link=slist_create_node(val);
    return ;
}
