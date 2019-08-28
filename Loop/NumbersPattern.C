#include<stdio.h>
int main(){
	int i,j;
	int count=0;
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			printf("%d ",count);
			count++;
			if(count==10)
				count=0;
		}
		printf("\n");
	}
	
	return 0;
}
