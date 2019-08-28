#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//#include<alloc.h>

typedef struct singly
{
	int data;
	struct singly *next;
}sll;

sll *start, *neww ,*link;
create()
{
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		neww=(sll*)malloc(sizeof(sll));
		if(neww==NULL)
		{
			printf("Memory Not allocated");
			exit(1);
		}
		else{
		
		printf("\n Enter Data: ");
		scanf("%d",&neww->data);
		neww->next=NULL;
		if(start==NULL)
		{
			start=neww;
			link=neww;
		}
		else
		{
			link->next=neww;
			link=neww;
		}
		}
		printf("\n Enter to Y /y continue  ");
		ch=getche();
	}
}
display()
{
	link=start;
	while(link!=NULL)
	{
		printf("Element is %d",link->data);
		link=link->next;
	}
}
main(){
	int choice;
	start=NULL;
	do
	{
		printf("\n 1. Create \n 2. Display \n 3. Count \n 4. Insert \n 5. Delete \n 6. Exit");
		printf("\n Enter Choice");
		scanf("%d",&choice);		
		switch(choice)
		{
			case 1: create();
					break;
			case 2: display();
					break;
			/*case 3: count();
					break;
			case 4: insert();
					break;
			case 5: delete();
					break;
			case 6: exit();
					break; */
			default: exit(1);				
		}
	}while(1);
}

