#include "../../../nodes/int_node.h"

typedef struct LinkedList
{
    IntNode *head;
    int size;
} LinkedList;

LinkedList *newIntLinkedList();