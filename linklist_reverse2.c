#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* create(struct node *beg, int data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data =data;
    new_node->next = NULL;
    if(beg == NULL)
    {
	beg = new_node;
	return beg;
    }
    struct node *temp = beg;
    while(temp->next != NULL)
    {
	temp = temp->next;
    }
    temp->next = new_node;
    return beg;
}

void display(struct node *beg)
{
    while(beg != NULL)
    {
	printf("%d ", beg->data);
	beg = beg->next;
    }
}

struct node* reverse(struct node *head)
{
    struct node *temp = NULL, *addr;
    while(head->next != NULL)
    {
	addr = head->next;
	head->next = temp;
	temp = head;
	head = addr;
    }
    head->next = temp;
    return head;
}

int main()
{
    struct node *head = NULL, *r_head = NULL;
    int data;
    scanf("%d", &data);
    while(data != -1)
    {
	head = create(head, data);
	scanf("%d", &data);
    }
    display(head);
    printf("\nreverse\n");
    r_head = reverse(head);
    display(r_head);
    printf("\n");
    return 0;
}

/*
void show(int *ptr)
{
    printf("%d", *ptr);
}

int main()
{
    int num = 5;
    int *ptr = &num;
    show(ptr);
    return 0;
}
*/
