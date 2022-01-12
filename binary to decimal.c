#include <stdio.h>
#include <stdlib.h>
void create();
display();
struct node
{
 int data;
 struct node *next;
};
struct node *head=NULL,*c,*p,*r;
main()
{
 int n,bit,i;
 printf("enter the number of bits in the binary number:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter a bit:\n");
  scanf("%d",&bit);
  create(bit);
 }
 display();
}
void create(int value)
{
 struct node * new = (struct node *)malloc(sizeof(struct node));
 new->data = value;
 new->next=NULL;
 if(head == NULL)
  head = new;
 else
 {
  c=head;
  while(c->next != NULL)
  {
   c=c->next;
  }
  c->next=new;
 }
}
display()
{
 int dec=0;
 if(head == NULL)
  printf("list is empty");
 else
  {
   for(c=head;c!=NULL;c=c->next)
   {
    printf("%d\t",c->data);
    dec=dec*2+c->data;
   }
   printf("\ndecimal equivalent = %d",dec);
  }
}

