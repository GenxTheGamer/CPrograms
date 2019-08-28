/* Program to add or sum two integers with reference to Dev- C++ Compiler
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
	int sum;//declaration of variable
	sum = a + b;//formula or equation of sum	
	printf("Sum of %d + %d is = %d \n", a, b, sum);
	return 0;
}//main function ends

