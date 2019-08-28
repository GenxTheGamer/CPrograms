#include<stdio.h>
int sub(int x,int y){
	int d;
	d=x-y;
	printf("subtraction= %d",d);
}
int main(){
	int a,b,result;
	printf(" :: \n");
	scanf("%d %d",&a,&b);
	result=sub(a,b);
	return 0;
}
