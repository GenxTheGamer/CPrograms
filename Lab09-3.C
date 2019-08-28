#include<stdio.h>
int main(){
	int ch=0,i;
	char a[5]={'a','b','c','d','e'};
	char b;
	printf("Enter a character you wish to search \n");
	scanf("%c",&b);
	for(i=0;i<5;++i){
		if(b==a[i]){
			ch++;
			printf("Character found on %d \n",i+1);
		}
	}
	return 0;
}
