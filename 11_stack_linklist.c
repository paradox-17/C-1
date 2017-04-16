square root of an integer
kth smallest element
next permutation
reverse a no using recursion
balanced paranthesis eg ()( is not balanced

// static int

static int i = 5;
static void foo(){}

// stacks

header files represents the interface

stack.h
void push(int item);
int pop();
int isempty();
int size();

stack.c
#include<stdio.h>    // search in all
#include "stack.h"    // look up for file in current directory

struct node
{
  int item;
  struct node *next;
}

static struct node *first = NULL;
static int n = 0;

void push(int item)    // complexity is O(1)
{
  struct node *oldfirst = first;
  first = (struct node*)malloc(sizeof(struct node));
  first -> item = item;
  first -> next = oldfirst;
  n++;
}

int pop()
{
  int item = first -> item;
  first = first -> next;
  n--;
  return item;
}
    
int isempty()
{
  return (first == NULL);
}

int size()
{
  return n;
}

gcc -c stack.c // this will create an object file and not an executable file stack.o
ar -cvr libstack.a  // this will create a library
			    
Q1. create a stack
Q2. make it genric
Q3. balanced paranthesis code using library


			    // refer to
			    stack.h
			    stack.c
			    stack.png
