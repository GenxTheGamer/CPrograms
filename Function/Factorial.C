/*Factorial Using Functions.
Author: Vaibhav Vyas
Date created: 18th Nov 2018
*/
#include<stdio.h>
int calFact(int n){  //Function for calculation
	int fact=1,i;    //decl. of fact (with initilization), i.
	for(i=1;i<=n;i++) //loop to go till value of n.
		fact*=i;   // can also be written as face=fact*i;
	return fact;
}
int main(){
	int n,result; //decl. of n,result.
	printf("Enter number you want factorial of : \n"); //getting input from user.
	scanf("%d",&n); 
	result=calFact(n); //program goes to line 6.
	printf("Factorial of %d is %d",n,result); //prints factorial.
	return 0;
}
