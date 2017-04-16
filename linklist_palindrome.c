// checks if the given linklist is palindrome or not

#include<stdio.h>
#include<stdlib.h>

void create ();
int chck();
void display();
struct node *beg = NULL;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    create();
    display();
    int flag = chck();
    if(flag == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}

void create()
{
    int data;
    scanf("%d", &data);
    while(data != -1)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data =data;
	temp->next = NULL;
	
        if(beg == NULL)
        {
	    beg = temp;
	}
        else
	{
	    struct node *head = beg;
            while(head->next != NULL)
            {
                head = head->next;
            }
            head->next = temp;
	}
	
        scanf("%d", &data);
    }
}

int chck()
{
  struct node *head = beg, *new_beg = NULL;
  while(head != NULL)
  {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = head->data;
    temp->next = new_beg;
    new_beg = temp;
    head = head->next;
  }
  display(new_beg);
  while(new_beg != NULL)
  {
    if(new_beg->data != beg->data)
      return -1;
    new_beg = new_beg->next;
    beg = beg->next;
  }
  return 1;
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

/*
#include<stdio.h>
#include<stdlib.h>

struct node* create(struct node *beg);
void display(struct node *beg);
void isPalindrome(int n);
void palindrome(struct node *beg);
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

void isPalindrome(int n)
{
  int r = 0, x = n;
  while(n > 0)
  {
    r = r * 10 + (n % 10);
    n /= 10;
  }
  if(r == x)
    printf("Palindrome\n");
  else
    printf("Not Palindrome\n");
}

void palindrome(struct node *beg)
{
  int n = 0;
  while(beg != NULL)
  {
    n = (n * 10) + beg->data;
    beg = beg->next;
  }
  isPalindrome(n);
}

int main()
{
    struct node *beg = NULL;
    beg = create(beg);
    display(beg);
    palindrome(beg);
    return 0;
}
*/
