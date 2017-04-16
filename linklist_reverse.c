#include<stdio.h>
#include<stdlib.h>

struct node* create(struct node *beg);
void display(struct node *beg);
void sort(struct node *beg);
static int n = 0;

struct node
{
    int data;
    struct node *next;
};

struct node* create(struct node *beg)
{
  int data;
  scanf("%d", &data);
  while(data != -1)
  {
    n++;
    struct node *temp = beg;
    beg = (struct node *)malloc(sizeof(struct node));
    beg->data = data;
    beg->next = temp;
    scanf("%d", &data);
  }
  return beg;
}

void display(struct node *beg)
{
  while(beg != NULL)
  {
    printf("%d ", beg->data);
    beg = beg->next;
  }
  printf("\n");
}

void sort(struct node *beg)
{
  for(int i = 0; i < n; i++)
  {
    struct node *t = beg;
    for(int j = 1; j < n-i; j++)
    {
      int temp = t->data;
      t->data = t->next->data;
      t->next->data = temp;
      t = t->next;
    }
  }
}

int main()
{
    struct node *beg = NULL;
    beg = create(beg);
    display(beg);
    sort(beg);
    display(beg);
    return 0;
}
