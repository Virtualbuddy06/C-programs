#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}node;
void enqueue(node **pthead, int val)
{
    node *tmp;
    tmp = (node*)malloc(sizeof(node));
    tmp->data = val;
    if (*pthead == NULL)
    {
        tmp->next = tmp;
    } 
    else 
    {
        tmp->next = (*pthead)->next;
        (*pthead)->next = tmp;
    }
    *pthead = tmp;
    printf("Enqueued %d\n", val);
}

int dequeue(node **ptrear)
{
    if (*ptrear == NULL) 
    {
        printf("Queue is empty!\n");
        return -999;
    }
    else
    {
        node *tmp = (*ptrear)->next;
        int z = tmp->data;
        if ((*ptrear)->next == *ptrear)
        {
            *ptrear = NULL;
        }
        else
        {
            (*ptrear)->next = tmp->next;
        }
        free(tmp);
        return z;
    }
}

void display(node *ptr)
{
    if (ptr == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    node *tmp = ptr->next;
    printf("Queue: ");
    do
    {
        printf("%d -> ", tmp->data);
        tmp = tmp->next;
    }while (tmp != ptr->next);
    printf("front\n");
}
int main()
{
    node *rear = NULL;
    int choice, val, z;
     do{
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
         switch(choice)
         {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(&rear, val);
                break;
            case 2:
                z = dequeue(&rear);
                if (z != -999)
                 printf("Dequeued %d\n", z);
                break;
            case 3:
                display(rear);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}
