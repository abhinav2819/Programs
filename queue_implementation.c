#include<stdio.h>
#include<string.h>
#include<conio.h>
#define max 5

void insertion(int *f,int *r,int a[])
{
	if(*r==max-1)
	{
		printf("\nQueue is full under flow situation");
	}
	else
	{
		int val;
		printf("\nEnter the element to inserted in the queue:");
		scanf("%d",&val);
		if(*f==-1)
		{
			*f=0;
		}
		*r=*r+1;
		a[*r]=val;
		printf("\nelement %d is inserted into the queue",val);
	}
}
void deletion(int *f,int *r,int a[])
{
	if(*f==-1)
	{
		printf("the queue is empty");
	}
	else
	{
		int val=a[*f];
		*f=*f+1;
		printf("The deleted elmenet=%d",val);
		if(*f>*r)
		{
			*f=*r=-1;
		}
	}
}
void disp(int *f,int *r,int a[])
{
	if(f==-1)
	{
		printf("\nQueue is empty");
	}
	int i;
	printf("\nThe queue is:-");
	for(i=*f;i<=*r;i++)
	{
		printf("\t%d",a[i]);
	}
}

int main()
{
	int queue[max];
	int front=-1;
	int rear=-1;
	int ch;

	printf("Queue Operation:");
	printf("\t1.Insertion");
	printf("\t2.Deletion");
	printf("\t3.Display");
	printf("\t4.Exit");

	do
	{
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insertion(&front,&rear,queue);
			break;
			case 2:deletion(&front,&rear,queue);
			break;
			case 3:disp(&front,&rear,queue);
			break;
			case 4:printf("Exit");
			break;
			default:printf("Invalid choice");
			break;
		}
	} while (ch!=4);
	return 0;
}
