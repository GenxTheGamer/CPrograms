#include<stdio.h>
int cal(int x,int y,int calc){
	switch(calc){
		case 1: printf("%d",x+y);
				break;
		case 2: printf("%d",x-y);
				break;
		case 3: printf("%d",x*y);
				break;
	}
}
int main(){
	int a,b,result;
	printf("Enter 2 numbers: \n");
	scanf("%d %d",&a,&b);
	printf("Enter a number from 1 to 3 (1=+,2=-,3=multiply)");
	scanf("%d",&result);
	result=cal(a,b,result);
}
