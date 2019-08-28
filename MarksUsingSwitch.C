#include<stdio.h>
int main(){
	int marks,ms;
	printf("Enter your marks: \n");
	scanf("%d",&marks);
	if(marks>=60)
		ms=1;
	else if(marks>=40)
		ms=2;
	else if(marks>=20)
		ms=3;
	else
		ms=0;
	switch(ms){
		case 1:
				printf("You got first divison.");
				break;
		case 2:
				printf("You got second divison.");
				break;
		case 3:
				printf("You got third divison.");
				break;
		case 0:
				printf("Sorry you failed.");
				break;		
	}
	return 0;	
}
