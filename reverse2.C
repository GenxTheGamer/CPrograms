#include<stdio.h>
int main(){ //main function starts;
	int a,b,c,rev; //declaration of variables.
	printf("Enter 4 digit number \n"); //getting input from user.
	scanf("%d",&a);
	c=a;
	rev=0;b=a%10;rev=rev*10+b; // 1st digit obtained
	a=a/10;b=a%10;rev=rev*10+b; //2nd digit obtained
	a=a/10;b=a%10;rev=rev*10+b; //3rd digit obtained
	a=a/10;b=a%10;rev=rev*10+b; //4th digit obtained
	printf("reverse of %d is %d",c,rev); //prints reverse of input digit
	
	return 0;
} //main function ends;
