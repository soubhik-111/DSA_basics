#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void linkedListTransversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // Your code goes here
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *seventh;
    struct node *eighth;
    struct node *nineth;
    struct node *tenth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));
    seventh = (struct node *)malloc(sizeof(struct node));
    eighth = (struct node *)malloc(sizeof(struct node));
    nineth = (struct node *)malloc(sizeof(struct node));
    tenth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = sixth;
    sixth->data = 6;
    sixth->next = seventh;
    seventh->data = 7;
    seventh->next = eighth;
    eighth->data = 8;
    eighth->next = nineth;
    nineth->data = 9;
    nineth->next = tenth;
    tenth->data = 10;
    tenth->next = NULL;

    linkedListTransversal(head);

    return 0;
}