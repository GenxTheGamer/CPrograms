#include<stdio.h>
int main(){
	int a,b,i;
	a=1189;
	b=841;
	for(i=1;i<10;i++){
		printf("a%d = %dx%d\n",i-1,a,b);
		int temp=a/2;
		a=b;
		b=temp;
	}
	return 0;
}
