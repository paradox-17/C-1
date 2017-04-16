/*
   Q. given a stack, sort it using recursion. use of any loop constructs like
   while, for etc is not allowed. we can only use the following functions on
   stack s:

   is_empty() : test whether stack is empty or not
   push(s) : adds a new element to stack
   pop(s) : removes top element from the stack
   top(s) : returns value of the top element
   Note this function doesnot remove element.

   eg
   i/p -3 14 18 -5 30
   o/p 90 18 14 -3 -5
 */

#include<stdio.h>

void push();
int pop();
void display();
void sort();
void insert(int n);

struct stack
{
    int stk[5];
    int top;
};

struct stack s;

int main()
{
    int opt = 1;
    int choice;
    s.top = -1;
    while(opt)
    {
        printf("1. push\n2. pop\n3. display\n4. sort\n5. exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                {
                    push();
                    break;
                }
            case 2:
                {
                    int r = pop();
                    printf("Popped element is %d\n", r);
                    break;
                }
            case 3:
                {
                    display();
                    break;
                }
            case 4:
                {
                    sort();
                    break;
                }
            case 5:
                {
                    return 0;
                }
        }
    }
    return 0;
}

void push()
{
    if(s.top == 4)
        printf("Stack is full\n");
    else
    {
        int n;
        scanf("%d", &n);
        s.top++;
        s.stk[s.top] = n;
    }
}

int pop()
{
    int n;
    if(s.top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        n = s.stk[s.top];
        s.top--;
    }
    return n;
}

void display()
{
    if(s.top == -1)
        printf("Stack is empty\n");
    else
    {
        for(int i = s.top; i >= 0; i--)
            printf("%d ", s.stk[i]);
    }
    printf("\n");
}

void sort()
{
    int temp;
    if(s.top != -1)
    {
        temp = pop();
        sort();
        insert(temp);
    }
}

void insert(int n)
{
    int temp;
    if( (s.top == -1) || (n > s.stk[s.top]) )
    {
        push(n);
    }
    else
    {
        temp = pop();
        insert(n);
        push(temp);
    }
}
