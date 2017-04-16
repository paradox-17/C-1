#include<stdio.h>
#include<stdlib.h>

void create(int data);
void display();

struct node *beg = NULL;

struct node
{
  int data;
  struct node *next;
};

int main()
{
  int data;
  scanf("%d", &data);
  while(data != -1)
  {
    create(data);
    scanf("%d", &data);
  }
  display();
  return 0;
}

void create(int data)
{
  struct node *new = (struct node *)malloc(sizeof(struct node));
  new->data = data;
  new->next = NULL;
  if(beg == NULL)
  {
    beg = new;
  }
  else
  {
    struct node *temp = beg;
    while(temp->next != NULL)
      temp = temp->next;
    temp->next = new;
  }
}

void display()
{
  struct node *temp = beg;
  while(temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
  
