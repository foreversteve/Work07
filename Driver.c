#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

int main(){
	struct node *list = malloc(sizeof(struct node));
	list -> i = 9;
	list -> next = NULL;
	list = insert_front(list,2);
	print_list(list);
	list = insert_front(list,6);
	print_list(list);
	list = insert_front(list,0);
	print_list(list);
	free_list(list);
	// printf("%d",(int)(list==NULL));
	return 0;
}