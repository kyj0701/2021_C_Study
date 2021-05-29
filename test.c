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

int main(void)
{
    struct Node *head = malloc(sizeof(struct Node));
    head -> next = NULL;

    struct Node *node1 = malloc(sizeof(struct Node));
    head->next = node1;
    node1->val = 10;

    struct Node *node2 = malloc(sizeof(struct Node));
    node1->next = node2;
    node2->val = 20;

    struct Node *node3 = malloc(sizeof(struct Node));
    node2->next = node3;
    node3->val = 30;

    node3->next = NULL;

    struct Node *curr = head->next;
    printf("Linked list : ");
    while (curr != NULL)
    {
        printf("%d ", curr->val);
        curr = curr->next;
    } 
    printf("\n");

    struct Node *cur = reverse_list(head);
    printf("Reversed Linked list : ");
    while (cur != NULL)
    {
        printf("%d ", cur->val);
        cur = cur->next;
    }
    printf("\n");

    free(node2);
    free(node1);
    free(head);

    return 0;
}