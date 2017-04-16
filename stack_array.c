#include<stdio.h>

void push(int item);
int pop();
int top();
void display();
int isempty();
int isfull();

struct stack
{
    int arr[5];
    int top;
}s;

int main()
{
    int n = 1, ch, data;
    while(n)
    {
	printf("1. Push\n2. Pop\n3. Top\n4. Display\n");
	scanf("%d", &ch);
	switch(ch)
	{
	    case 1:
	    {
		if(isfull())
		    printf("Stack is Overloaded");
		else
		{
		    printf("Enter data to be pushed ");
		    scanf("%d", &data);
		    push(data);
		}
		break;
	    }
	    case 2:
	    {
		if(isempty())
		    printf("Stack is Empty");
		else
		    printf("Popped value is %d", pop());
	    }
	}
	printf("Do you want to continue ");
	scanf("%d", &n);
    }
    return 0;
}

void push(int item)
{
    s.top++;
    s.arr[s.top] = item;
}

int pop()
{
    return s.arr[s.top--];
}

int top()
{
    return s.arr[s.top];
}

 void display()
 {
     for(int i = s.top; i >= 0; i--)
	 printf("%d\n", s.arr[i]);
 }

int isempty()
{
    if(s.top == -1)
	return 1;
    else
	return 0;
}

int isfull()
{
    if(s.top == 4)
	return 1;
    else
	return 0;
}
