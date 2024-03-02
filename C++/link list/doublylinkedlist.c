#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    char data;
    struct Node *next;
};

struct Node *head = NULL;

void insert_at_Begining()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    scanf(" %c", &ptr->data);

    if (head == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
    }
    else
    {
        ptr->prev = NULL;
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
}

void create()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    scanf(" %c", &ptr->data);

    if (head != NULL)
    {
        head->next = ptr;
        ptr->prev = head;
    }
    else
    {
        ptr->next = NULL;
    }
    ptr->prev = NULL;
    head = ptr;
}

void insert_last()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    scanf(" %c", &ptr->data);

    if (head == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
    }
    else
    {
        struct Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->prev = p;
        ptr->next = NULL;
    }
}
void insert_specific()
{
    struct Node *ptr, *temp;
    int loc, i;
    char item;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    temp = head;
    scanf("%d", &loc);
    for (i = 0; i < loc - 1; i++)
    {
        temp = temp->next;
    }
    scanf(" %c", &item);
    ptr->data = item;
    ptr->next = temp->next;
    ptr->prev = temp;
    temp->next = ptr;
    temp->next->prev = ptr;
}
void delete_at_Begining()
{
    struct Node *ptr;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
    }
}
void delete_specific()
{
    struct Node *ptr, *temp;
    int val;
    scanf("%d", &val);
    ptr = head;
    while (ptr->data != val)
        ptr = ptr->next;
    if (ptr->next->next == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        temp = ptr->next;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        free(temp);
    }
}
void delete_last()
{
    struct Node *ptr = head;
    if (ptr->next == NULL)
    {
        free(ptr);
        head = NULL;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
    }
}
void display()
{
    struct Node *ptr = head;

    while (ptr != NULL)
    {
        printf("%c\n", ptr->data);
        ptr = ptr->next;
    }
}
void display1()
{
    struct Node *ptr = head;

    while (ptr != NULL)
    {
        printf("%c ", ptr->data);
        ptr = ptr->next;
    }
}
void reverse(struct Node **head_ref)
{
    struct Node *temp = NULL;
    struct Node *current = *head_ref;
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL)
        *head_ref = temp->prev;
}

int main()
{
    int num;
    int choice;
    scanf("%d", &choice);

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insert_at_Begining();
            break;
        case 3:
            insert_last();
            break;
        case 4:
            insert_specific();
            break;
        case 5:
            delete_at_Begining();
            break;
        case 6:
            delete_last();
            break;
        case 7:
            delete_specific();
            break;
        case 8:
            display();
            break;
        case 9:
            display1();
            printf("\n");
            reverse(&head);
            display1();
            printf("\n");
            return 0;
            break;
        }
        scanf("%d", &choice);
        if (choice == 0)
        {
            display();
        }
    }
    // Free all nodes
    struct Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}