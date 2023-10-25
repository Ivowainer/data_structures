#include <stdio.h>
#include "test_int_linked_list.h"
#include "../int_linked_list.h"

int testNewIntLinkedList();

void test_int_linked_list()
{
    printf("newIntLinkedList... \n");
    int newLinkedList = testNewIntLinkedList();

    int predicate = newLinkedList;

    if (!newLinkedList)
    {
        printf("newLinkedList FAILED");
        return;
    }

    printf("TEST Int LinkedList have successfully done! \n");
}

int testNewIntLinkedList()
{
    LinkedList *list = newIntLinkedList();

    if (!list)
        return 0;

    return 1;
}