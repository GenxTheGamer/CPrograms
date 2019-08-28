/* Program to multiply two integers with reference to Dev- C++ Compiler
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
	int mul;//declaration of variable
	mul = a * b;//formula or equation of multiply	
	printf("Multiplication of %d x %d is = %d \n", a, b, mul);
	return 0;
}//main function ends

