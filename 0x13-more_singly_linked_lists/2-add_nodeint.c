#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - adds node at the beginning
* @head: first member
* @n: second member
* Return: address of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}


