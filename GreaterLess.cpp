/* Program to know greater integer number.
Author: Vaibhav Vyas
Date created: 19 Sep 18
*/
#include<stdio.h>
int main(){ //main funtion starts
	int a,b; //declaration of variables
	printf("Enter 2 numbers :");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("%d is greater than %d",a,b);
	else if(b>a)
		printf("%d is greater than %d",b,a);
	else
		printf("Both are equal");
} //main function ends
