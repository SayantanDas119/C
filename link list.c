//linkedlist insert and delete all position.
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
typedef struct node {
						int data;
						struct node*next;
					}Node;
void insert_begin(Node**p,int n)
{
	Node*q;
	q=(Node*)malloc(sizeof(Node));
	q->data=n;
	q->next=*p;
	*p=q;
}
void insert_end(Node**p,int n)
{
	Node*q,*r;
	q=(Node*)malloc(sizeof(Node));
	q->data=n;
	q->next=NULL;
	if(*p==NULL)
	*p=q;
	else
	{
		r=*p;
		while(r->next!=NULL)		
		{
			r=r->next;
		}
		r->next=q;
	}
}
void insert_nth(Node**p,int pos,int n)
{
	Node*q,*r;
	int i;
	q=(Node*)malloc(sizeof(Node));
	q->data=n;
	if(*p==NULL || pos==1)
	{
		q->next=*p;
		*p=q;
	}
	else
	{
		r=*p;
		for(i=0;i<pos-2;i++)
		{
			r=r->next;
		}
		q->next=r->next;
		r->next=q;
	}
}
void delete_first(Node**p)
{
	Node*r;
	if(*p==NULL)
	{
		printf("Null List! Deletion Not Possible");
	}
	else
	{
		r=*p;
		*p=r->next;
		free(r);
	}
}
void delete_last(Node**p)
{
	Node *r;
	if(*p==NULL)
	{
		printf("Null List! Deletion Not Possible");
	}
	else if((*p)->next==NULL)
	{
		free(*p);
		*p=NULL;
	}
	else
	{
		r=*p;
		while(r->next->next!=NULL)
		{
			r=r->next;
		}
		free(r->next);
		r->next=NULL;
	}
}
void delete_nth(Node**p,int pos)
{
	Node *q,*r=*p;
	int i;
	if(*p==NULL)
	{
		printf("Null List! Deletion Not Possible...");
	}
	else if(pos==1)
	{
		*p=r->next;
		free(r);
	}
	else
	{
		for(i=0;i<pos-2;i++)
		{
			r=r->next;
		}
		q=r->next;
		r->next=q->next;
		free(q);
	}
}
void delete_anynode(Node**p,int n)
{
	Node *q,*r=*p,*s=*p;
	int i;
	if(*p==NULL)
	{
		printf("Null List!Deletion Not Possible");
	}
	else
	{
		while(r->data!=n)
		{
			r=r->next;
		}
		q=r->next;
		while(s->next!=r)
		{
			s=s->next;
		}
		s->next=q;
		free(r);
	}
}
void display(Node*p)
{
	while(p->next!=NULL)
	{
		printf("%d---",p->data);
		p=p->next;
	}
	printf("%d",p->data);
}
int counter(Node*p)
{
	int c=0;
	while(p!=NULL)
	{
		p=p->next;
		c++;
	}
	return c;
}
int main()
{
	Node *head=NULL;
	int num,loc,choice;
	char opt;
	printf("PROGRAM TO IMPLEMENT SINGLE LINKED LIST");
	printf("\n=======================================");
	do
	{
		printf("\n1.Create/Appending The List");
		printf("\n2.Insert Node At Beginning");
		printf("\n3.Insert Node At Nth Position");
		printf("\n4.Delete First Node");
		printf("\n5.Delete Last Node");
		printf("\n6.Delete the Node whose Data Matches with given Data");
		printf("\n7.Delete Nth Node");
		printf("\n8.Displaying The List");
		printf("\n9.Exit");
		
		printf("\n\nEnter Your Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				do
				{
					printf("Enter The Data : ");
					scanf("%d",&num);
					insert_end(&head,num);
					printf("Enter More Data (Y/N)? : ");
					fflush(stdin);
					opt=getchar();
				}while(toupper(opt)!='N');
				break;
			case 2:
				printf("Enter The Data : ");
				scanf("%d",&num);
				insert_begin(&head,num);
				break;
			case 3:
				printf("\nEnter The Node Number Before Which New Node Will Be Inserted : ");
				scanf("%d",&loc);
				printf("\nEnter The Data : ");
				scanf("%d",&num);
				insert_nth(&head,loc,num);
				break;
			case 4:
				delete_first(&head);
				break;
			case 5:
				delete_last(&head);
				break;
			case 6:
				printf("\nEnter The Data You Want To Delete : ");
				scanf("%d",&num);
				delete_anynode(&head,num);
				break;
			case 7:
				printf("\nEnter The Position Which Will Be Deleted : ");
				scanf("%d",&loc);
				delete_nth(&head,loc);
				break;
			case 8:
				display(head);
				break;
			case 9:
				printf("\nQuiting........");
				getch();
				exit(0);
			default:
				printf("Invalid Choice. Please Enter Correct Choice");
				getch();
		}
	}while(1);
}
