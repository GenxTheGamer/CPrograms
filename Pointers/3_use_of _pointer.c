#include<stdio.h>
int main(){
	int a,b,c,*d[3];
	printf("enter the value of first integer\n");
	scanf(" %d ",&a);
	d[0]=&a;
	printf("enter the value of second integer\n");
	scanf(" %d ",&b);
	d[1]=&b;
	printf("enter the value of third integer\n");
	scanf(" %d ",&c);
	d[2]=&c;
	printf("the first value is %d\n",*d[0]);
	printf("the second value is %d\n",*d[1]);
	printf("the third value is %d\n",*d[2]);
	printf("the address of first value is %u\n",d[0]);
	printf("the address of second value is %u\n",d[1]);
	printf("the address of third value is %u\n",d[2]);
	
	printf("the address of address of first value is %u\n",&d[0]);
	printf("the address of address of second value is %u\n",&d[1]);
	printf("the address of address of third value is %u\n",&d[2]);
	return 0;
}


