#include<stdio.h>
int main(){
	int m[3];
	printf("Enter your marks \n");
	scanf("%d",&m[0]);
	printf("Enter your marks \n");
	scanf("%d",&m[1]);
	printf("Enter your marks \n");
	scanf("%d",&m[2]);
	printf("1st student %marks is %0.2f \n",m[0]/10.0);
	printf("1st student %marks is %0.2f \n",m[1]/10.0);
	printf("1st student %marks is %0.2f \n",m[2]/10.0);
	return 0;
}
