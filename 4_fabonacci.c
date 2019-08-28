#include <stdio.h>
int i=0;
int fibonacci(int a, int b, int n){
	int fab;
	if(i==(n-2))
		return 0;
	else{
	fab=a+b;
	printf(" %d", fab);
	a=b;
	b=fab;
	i++;
	fibonacci(a, b, n);
	}
}
int main(){
	int a=1, b=1, n;
	printf("Enter the number of terms of fibonacci series: \n");
	scanf(" %d", &n);
	printf("%d %d",a , b);
	fibonacci(a, b, n);
	return 0;
}
