#include"dlist.h"
int main()
{
dlist_t *head = NULL;
dlist_insert_last(&head,10);
dlist_insert_last(&head,8);
dlist_insert_first(&head,2);
dlist_insert_first(&head,1);
//dlist_delete_last(&head);
//dlist_delete_first(&head);
dlist_insert_before(head,10,1111);
dlist_insert_after(head,10,2222);
dlist_print(head);

}
