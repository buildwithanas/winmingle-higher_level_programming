<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
>>>>>>> 94a71fd54d4ba703742e33a692a164ffb144ed73
#include "lists.h"
 
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
 
<<<<<<< HEAD
    head = NULL;
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 17);
	add_nodeint_end(&head, 972);
	add_nodeint_end(&head, 50);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 50);
	add_nodeint_end(&head, 972);
	add_nodeint_end(&head, 17);
	add_nodeint_end(&head, 1);
	print_listint(head);
 
	if (is_palindrome(&head) == 1)
    	printf("Linked list is a palindrome\n");
	else
    	printf("Linked list is not a palindrome\n");
=======
	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
 
	printf("-----------------\n");
 
	insert_node(&head, 27);
 
	print_listint(head);
>>>>>>> 94a71fd54d4ba703742e33a692a164ffb144ed73
 
	free_listint(head);
 
	return (0);
}
<<<<<<< HEAD
=======

>>>>>>> 94a71fd54d4ba703742e33a692a164ffb144ed73
