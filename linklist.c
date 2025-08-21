#include <stdio.h>
#include <stdlib.h>

typedef struct block
{
    int data;
    struct block *next;
} node;
void addBeg(node **pthead, int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = val;
    temp->next = *pthead;
    *pthead = temp;
}
int countNodes(node *pthead)
{
    int count = 0;
    node *ptr = pthead;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
void display(node *pthead)
{
    if (pthead == NULL)
    {
        printf("List is empty\n");
        return;
    }
    node *ptr = pthead;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void append(node **pthead, int val)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = val;
    temp->next = NULL;
    if (*pthead == NULL)
    {
        *pthead = temp;
        return;
    }
    else
    {
        node *ptr = *pthead;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
node *findAddr(node *pthead, int pos)
{
    int i = 1;
    node *ptr = pthead;
    while (ptr != NULL && i < pos)
    {
        ptr = ptr->next;
        i++;
    }
    return ptr;
}
void insertPosition(node **pthead, int val, int pos)
{
    if (pos == 1)
    {
        addBeg(pthead, val);
    }
    else
    {
        node *ptr = findAddr(*pthead, pos - 1);
        if (ptr == NULL)
        {
            printf("Invalid position!\n");
            return;
        }
        else
        {
            node *temp = (node *)malloc(sizeof(node));
            temp->data = val;
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }
}
void delBeg(node **pthead)
{
    if (*pthead == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    else
    {
        node *temp = *pthead;
        *pthead = (*pthead)->next;
        free(temp);
    }
}
void delBegPosition(node **pthead, int pos)
{
    if (pos == 1)
    {
        delBeg(pthead);
    }
    else
    {
        node *ptr = findAddr(*pthead, pos - 1);
        if (ptr == NULL)
        {
            printf("Invalid position!\n");
            return;
        }
        else
        {
            node *temp = ptr->next;
            ptr->next = temp->next;
            free(temp);
        }
    }
}
node *linearSearch(node *ptr, int val)
{
    int i = 0;
    for (i = 0; ptr != NULL; i++)
    {
        if (ptr->data == val)
        {
            return ptr;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    return NULL;
}
int main()
{
    node *pthead = NULL;
    int choice, val, pos;
    node *found;
    do
    {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at Position\n");
        printf("6. Count Nodes\n");
        printf("7. Search Node\n");
        printf("8. Display List\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            addBeg(&pthead, val);
            break;
        case 2:
            printf("Enter value: ");
            scanf("%d", &val);
            append(&pthead, val);
            break;
        case 3:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &val);
            insertPosition(&pthead, val, pos);
            break;
        case 4:
            delBeg(&pthead);
            break;
        case 5:
            printf("Enter position: ");
            scanf("%d", &pos);
            delBegPosition(&pthead, pos);
            break;
        case 6:
            printf("Total nodes = %d\n", countNodes(pthead));
            break;
        case 7:
            printf("Enter value to search: ");
            scanf("%d", &val);
            found = linearSearch(pthead, val);
            if (found)
                printf("Value %d found!\n", found->data);
            else
                printf("Value not found!\n");
            break;
        case 8:
            display(pthead);
            break;
        case 9:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 9);
    return 0;
}
