#include "lists.h"

#include <stdio.h>



size_t looped_listint_len(const listint_t *head);

size_t print_listint_safe(const listint_t *head);



/**
 *
 *  * looped_listint_len - Counts the number of unique nodes
 *
 *   *                      in a looped listint_t linked list.
 *
 *    * @head: A pointer to the head of the listint_t to check.
