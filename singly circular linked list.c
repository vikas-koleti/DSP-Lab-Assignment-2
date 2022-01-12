#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int x;
struct node{
	char info[5][50];
	struct node* link;
}*head,*tail;
void display2(){
	int m=1;
	struct node* temp;
	temp=head;
	while(temp!= head ||m==1){
		printf("%d. %s\n",m,temp->info[1]);
		temp=temp->link;
			m++;;
	}
	
}
void display(){
	int m=1,check=0;
	struct node* temp;
	temp=head;
	while(temp!= head ||m==1){
		printf("%d. %s   %s  %s\n",m,temp->info[0],temp->info[1],temp->info[2]);
		temp=temp->link;
			m++;
	}
	temp=head;
	m=1;
	while(temp!=head || m==1){
		m=2;
	if(strcmp(temp->info[2],temp->link->info[0])){
		check=1;
		break;
	}
	
	temp=temp->link;
}
if(check==0)
printf("Strings are matching\n");
else
printf("Strings are not matching\n");	
}

void replace(){
	int y;
	printf("Enter the node from 1 to %d: ",x);
	if(scanf("%d",&y)==1){
	if(y>0 && y<= x){
		struct node* temp;
	temp=head;
	int i=1;
	while(i<y){
	temp=temp->link;
	i++;
}
	printf("Enter the position of the string to be replaced (1 to 3): ");
	scanf("%d",&y);
	if(y>=0 && y<=3){
	printf("Enter the string\n");
	scanf("%s",&temp->info[y-1]);
	printf("String replaced successfully\n");
}
else
printf("Invalid position\n");
}
else
printf("Invalid\n");
}
else{
	printf("Error occured");
	exit(0);
}
}

int main()
{
	printf("Enter the size: ");
	if(scanf("%d",&x) ==1)
	{
	int i=0;
	for(i=0;i<x;i++)
	{
	printf("Enter the three string values in %d linked list\n",i+1);
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	int r=0;
	for(r=0;r<3;r++)
	scanf("%s",&temp->info[r]);
	if(head==NULL && tail==NULL){
		temp->link=NULL;
		head=temp;
		tail=temp;
	}
	else{
		tail->link=temp;
		tail=temp;
		tail->link=head;
	}
}
int choice=0;
while(choice !=4){
printf("Enter the choice\n1.Display all nodes 2.Display Second String of all nodes 3.Replace String values 4.Exit \n");
if(scanf("%d",&choice)==1){
if(choice==1)
display();
else if(choice==2)
display2();
else if(choice==3)
replace();
else if(choice==4){
}
else
printf("Invalid choice\n");
}
else{
	printf("Error occured");
	exit(0);
}
}
}
else{
	printf("Error occured");
	exit(0);
}
}
