#include<stdio.h>
int main()
{
	int per_marks;
	printf("input");
	scanf("%d",&per_marks);
	if(per_marks>60)
		printf("you got 1st division");
	else 
	if(per_marks>=50)
		printf("you got 2nd divison");
	else 
	if(per_marks>=40)
		printf("you got 3rd divison");
	else
		printf("fail");
	
	return 0;

}
