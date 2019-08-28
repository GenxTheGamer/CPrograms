#include <stdio.h>
union value{
	char c;
	int r;
};
union value n[4];
int main(){
	printf("enter characters to find ascai value \n");
	for(int i=0;i<4;i++){
		printf("\nenter character %d",i+1);	
		scanf(" %c",&n[i].c);
	}
	printf("\n ascai value \n");
	for(int i=0;i<4;i++)
		printf(" %c=%d \n",n[i].c,n[i].r);
	return 0;
}
