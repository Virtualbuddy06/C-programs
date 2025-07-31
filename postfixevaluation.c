#include<stdio.h>
#include <string.h>
#define SIZE 100
typedef struct
{
    char post[SIZE];
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
        ptr->post[++ptr->tos] = z;
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
        char z = ptr->post[ptr->tos];
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
        char z = ptr->post[ptr->tos];
        return z;
    }
}
int evaluate(char post[])
{
    int i;
    stack s;
    int op1,op2,result;
    init(&s);
    for(i=0;post[i]!='\0';i++)
    {
       if(post[i]>='0'&&post[i]<='9')
       {
        push(&s,post[i]-'0');
       }
       else{
        switch (post[i])
        {
            case '+':
            op2=pop(&s);
            op1=pop(&s);
            result=op1+op2;
            break;
            case '-':
            op2=pop(&s);
            op1=pop(&s);
            result=op1-op2;
            break;
            case '*':
            op2=pop(&s);
            op1=pop(&s);
            result=op1*op2;
            break;
            case '/':
            op2=pop(&s);
            op1=pop(&s);
            result=op1/op2;
            break;
            case '%':
            op2=pop(&s);
            op1=pop(&s);
            result=op1%op2;
            break;
        }
        push(&s,result);
       }
    }
    return pop(&s);
}
int main()
{
  char str[SIZE];
  printf("Enter a postfix expresssion\n");
  fgets(str,sizeof(str),stdin);
  printf("The result of the postfix evaluation is:%d",evaluate(str));
  return 0;
}
