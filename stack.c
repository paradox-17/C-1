#include<stdio.h>    // search in all
#include "stack.h"    // look up for file in current directory
#include<stdlib.h>

struct node
{
  void *item;
  struct node *next;
};

static struct node *first = NULL;
static int n = 0;

void push(void *item)    // complexity is O(1)
{
  struct node *oldfirst = first;
  first = (struct node*)malloc(sizeof(struct node));
  first -> item = item;
  first -> next = oldfirst;
  n++;
}

void* pop()
{
  void *item;
  item = first -> item;
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
