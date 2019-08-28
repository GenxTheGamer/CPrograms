#include<stdio.h>
void addition(){
	int a,b,sum;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum of %d & %d is = %d",a,b,sum);
}

int main(){
	addition();
}

