#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[10];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    int x = stack[top];
    top--;
    return x;
}

void print()
{
    printf("%d\n", stack[top]);
}

int main()
{
    char str[5];
    scanf("%s", str);
    int x, y;
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == '+')
        {
            x = pop();
            y = pop();
            push(x+y);
        }
        else if(str[i] == '-')
        {
            x = pop();
            y = pop();
            push(x-y);
        }
        else if(str[i] == '*')
        {
            x = pop();
            y = pop();
            push(x*y);
        }
        else
            push((int)str[i] - 48);
    }
    print();
    return 0;
}
