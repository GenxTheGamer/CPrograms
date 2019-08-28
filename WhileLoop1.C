#include<stdio.h>
int main(){
	int count=1;
	while(count<=10){
	int a,b;
	printf("Enter two integers : \n");
	scanf("%d %d",&a,&b);
	int sum=a+b;
	printf("Sum is %d",sum);
	count=count+1;
	}
	return 0;
}
