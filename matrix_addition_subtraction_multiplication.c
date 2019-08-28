#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f,sum=0,i,j,k;
	printf("enter the no of rows of square matrix\n");
	scanf("%d",&f);
	printf("enter the elements of the first matrix\n");
	for(i=0;i<f;i++)
		for(j=0;j<f;++j)
			scanf("%d",&a[i][j]);
	printf("Enter the elements of the second matrix\n");
	for(i=0;i<f;i++)
		for(j=0;j<f;++j)
			scanf("%d",&b[i][j]);
	printf("addition of two matrix\n");
	for(i=0;i<f;i++){
		for(j=0;j<f;++j){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("subtraction of two matrix\n");
	for(i=0;i<f;i++){
		for(j=0;j<f;++j){
			d[i][j]=a[i][j]-b[i][j];
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
	printf("multiplication of two matrix\n");
	for(i=0;i<f;i++){
		for(j=0;j<f;++j){
			for(k=0;k<f;k++)
				sum+=a[i][k]*b[k][j];
			e[i][j]=sum;
			printf("%d ",e[i][j]);
			sum=0;
		}
		printf("\n");
	}
	return 0;
}
