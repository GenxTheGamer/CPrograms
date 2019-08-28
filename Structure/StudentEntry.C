#include<stdio.h>
int main(){
	struct student {
		char name[15];
		int age[2];
		int clas[2];
	}student;
	printf("Enter your details: \n");
	scanf("%c %d %d",&student.name[15],&student.age[2],&student.clas[2]);
	printf("Your details were: \n");
	printf("%c %d %d",student.name[15],student.age[2],student.clas[2]);
	return 0;
}
