#include<stdio.h>
int main(){
	char ch;
	do{
		int a,p_m;
		printf("Enter two number");
		scanf("%d",&a);
		p_m=a/10;
		printf("Your percentage marks are %d",p_m);
		printf("Would u like to continue?");
		
	}
	printf("%c",&ch);
	while(ch=='y'||ch=='Y');
}
