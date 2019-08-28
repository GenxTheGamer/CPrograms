#include<stdio.h>
int add(int x,int y){
	int addition=x+y;
	printf("Enter two number");
	scanf("%d %d",&x,&y);
	printf("Sum of %d and %d is : %d",addition);
}
int sub(int x,int y){
	int subt=x-y;
	printf("Enter two number");
	scanf("%d %d",&x,&y);
	printf("Subt of %d and %d is : %d",subt);
}
int mul(int x,int y){
	int multiply=x+y;
	printf("Enter two number");
	scanf("%d %d",&x,&y);
	printf("Multiplication of %d and %d is : %d",multiply);
}
int main(){
	int a,b,ch,result;
	printf("Enter Two numbers");
	scanf("%d %d",&a,&b);
	printf("Enter character");
	scanf("%s",&ch);
	switch(ch){
		case '+' :
			result=sub(a,b);
			 
	}
	return 0;
}
