#include<stdio.h>
int flag=0;
float cal(int a,char c,int b){
	switch(c){
		case '+' :
			return (a+b);
			break;
		case '/' :
			return ((float)a/b);
			break;
		case '*' :
			return (a*b);
			break;
			
		case '-' :
			return (a-b);
			break;
		default:
			printf("not suitable operator\n");
			flag=-1;
			break;
	}
}
int main(){
	int a,b;
	char ch;
	printf(" enter any expression like a+b\n");
	scanf(" %d %c %d ",&a,&ch,&b);
	float value=cal(a,ch,b);
	if(flag==0)
		printf("%.2f",value);
	return 0;
}
