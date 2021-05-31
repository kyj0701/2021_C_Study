#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node* reverse_list(struct Node *head)
{
    struct Node* res = NULL;
    head = head -> next;

    while(head != NULL)
    {
        struct Node *next = head -> next;
        head -> next = res;
        res = head;
        head = next;
    }
    return res;
}