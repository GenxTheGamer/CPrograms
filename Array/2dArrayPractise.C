#include<stdio.h>
int main(){
	int m,n,i,j;
	int m1[3][3];
	m=3;
	n=3;
	printf("Enter elements\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&m1[i][j]);
	printf("data item of matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d\t",m1[i][j]);
		printf("\n");
	}
	return 0;
}
