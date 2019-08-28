#include<stdio.h>
int swaping1(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping\na=%d\nb=%d\n",a,b);
}
int swaping2(int *a,int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("after swaping\na=%d\nb=%d\n",*a,*b);
}
int main(){
	int x,y;
	printf("enter any two variable to swap\n");
	printf("a = ");
	scanf("%d",&x);
	printf("b = ");
	scanf("%d",&y);
	printf("swaping using call by value\n");
	swaping1(x,y);
	printf("\ninitial variables after swaping\na=%d\nb=%d\n",x,y);
	printf("swaping using call by reference\n");
	swaping2(&x,&y);
	printf("\ninitial variables after swaping\na=%d\nb=%d\n",x,y);
	return 0;
}
