/* Program to divide two integers with reference to Dev- C++ Compiler
Author:- Student
Date Created:- 27 Aug 2018
*/
#include<stdio.h>
//program execution starts from main function
int main(){//main function starts
	int a, b;//declaration of variable
	printf("Enter the value of 1st variable or operand \n");
	scanf("%d", &a);//receiving value from user '&' operator tells the address of variable
	printf("Enter the value of 2nd variable or operand \n");
	scanf("%d", &b);//receiving value from user '&' operator tells the address of variable
	float div;//declaration of variable
	div = (float) a / b;//formula of division with external type casting	
	printf("Division of %d / %d is = %f \n", a, b, div);
	return 0;
}//main function ends

