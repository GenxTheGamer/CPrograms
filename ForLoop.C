#include<stdio.h>
int main(){
	int count=1;
	for(count=1;count<4;count++){
		int a,b;
		printf("Enter two integers: \n");
		scanf("%d %d",&a,&b);
		int sum=a+b;
		printf("sum of %d + %d = %d \n",a,b,sum);
	
		}
	return 0;
}
		
