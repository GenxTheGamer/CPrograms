/*Program to display result of student
Author:- Vaibhav Vyas
Date crated:- 13th sep 18
*/

#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks \n");
	scanf("%d",&marks);
	if(marks>=40)
		printf("Pass");
	else
		printf("Fail");	
}
