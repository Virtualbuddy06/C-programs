#include <stdio.h>
#include <string.h>
#define SIZE 100
typedef struct
{
    char infix[SIZE];
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
void push(stack *ptr, char z)
{
    if (isfull(ptr) == 1)
    {
        return;
    }
    else
    {
        ptr->infix[++ptr->tos] = z;
    }
}
char pop(stack *ptr)
{
    if (isempty(ptr) == 1)
    {
        return '#';
    }
    else
    {
        char z = ptr->infix[ptr->tos];
        ptr->tos--;
        return z;
    }
}
char peek(stack *ptr)
{
    if (isempty(ptr) == 1)
    {
        return '#';
    }
    else
    {
        char z = ptr->infix[ptr->tos];
        return z;
    }
}
int preced(char ch)
{
    if (ch == '*' || ch == '/' || ch == '%')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 1;
}
char *convert(char infix[])
{
    stack s;
    init(&s);
    static char out[SIZE];
    int i = 0, j = 0;
    char ch, t;
    for (i = 0, j = 0; infix[i] != 0; i++)
    {
        if (infix[i] >= '0' && infix[i] <= '9')
        {
            out[j++] = infix[i];
        }
        else
        {
            switch (infix[i])
            {
            case '(':
                push(&s, infix[i]);
                break;
            case ')':
                do
                {
                    t = pop(&s);
                    if (t != '(')
                        out[j++] = t;
                } while (t != '(');
                break;
            default:
                while (isempty(&s) != 1 && preced(peek(&s)) >= preced(infix[i]))
                {
                    out[j++] = pop(&s);
                }
                push(&s, infix[i]);
                break;
            }
        }
    }
    while (isempty(&s) != 1)
    {
        out[j++] = pop(&s);
    }
    out[j] = '\0';
    return out;
}
int main()
{
    char infix[SIZE];
    printf("Enter infix expression: ");
    scanf("%s", infix);

    char *postfix = convert(infix);
    printf("Postfix expression: %s\n", postfix);

    return 0;
}