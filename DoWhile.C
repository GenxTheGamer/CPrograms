#include<stdio.h>
int main(){
	char ch;
	do{
		int a,b;
		printf("Enter two numbers: \n");
		scanf("%d %d",&a,&b);
		int sum=a+b;
		printf("Sum is %d \n",sum);
		printf("would you like to continue? Press Y");
		scanf("%c",&ch);
	}while(ch == 'y'||ch=='Y');
}
