#include <stdio.h>
#include <stdlib.h>
#include "int_linked_list.h"

LinkedList *newIntLinkedList()
{
    LinkedList *list = malloc(sizeof(LinkedList));

    list->head->value, list->head->next = NULL;
    list->size = 1;
    return list;
}