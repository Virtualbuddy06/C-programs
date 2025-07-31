#include <stdio.h>
#define SIZE 100
typedef struct
{
    int arr[SIZE];
    int tos;
} stack;
void init(stack *ptr)
{
    ptr->tos = -1;
}
int isempty(stack *ptr)
{
    if (ptr->tos == -1)
        return 1;
    else
        return 0;
}
int isfull(stack *ptr)
{
    if (ptr->tos == SIZE - 1)
        return 1;
    else
        return 0;
}
void push(stack *ptr, int z)
{
    if (isfull(ptr) == 1)
    {
        return;
    }
    else
    {
        ptr->arr[++ptr->tos] = z;
    }
}
int pop(stack *ptr)
{
    if (isempty(ptr) == 1)
    {
        return -11111111;
    }
    else
    {
        int z = ptr->arr[ptr->tos];
        ptr->tos--;
        return z;
    }
}
int peek(stack *ptr)
{
    if (isempty(ptr) == 1)
    {
        return -99999999;
    }
    else
    {
        int z = ptr->arr[ptr->tos];
        return z;
    }
}
int main()
{
    int item, po, choice;
    stack s;
    init(&s);
    do
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to push\n");
            scanf("%d", &item);
            push(&s, item);
            break;
        case 2:
            po = pop(&s);
            printf("The element is popped\n");
            printf("And the popped element is\n: %d", po);
            break;
        case 3:
            printf("The last element is: %d\n", peek(&s));
            break;
        case 4:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 4);
    return 0;
}
