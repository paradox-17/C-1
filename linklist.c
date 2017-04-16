#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* create(struct node *beg)
{
    int data;
    scanf("%d", &data);
    struct node *temp;
    temp = beg;
    while(data != -1)
    {
      /*        if(beg == NULL)
        {
            beg->data = data;
	    beg->next = NULL;
        }
        else
        {
      */    struct node *new = (struct node*)malloc(sizeof(struct node));
	    new->data = data;
            new->next = NULL;
	   
	    while(temp->next != NULL)
	      temp = temp->next;
	    
	    temp->next = new;
	    scanf("%d", &data);
    }
    return beg;
}

void display(struct node *beg)
{
    while(beg != NULL)
    {
        printf("%d \n", beg->data);
	beg = beg->next;
    }
} 

int main()
{
    struct node *beg = NULL;
    beg = create(beg);
    display(beg);
  

    return 0;
}
