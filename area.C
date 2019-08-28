#include<stdio.h>
int main(){
	float r, area;
	printf("Enter the value of radius \n");
	scanf("%f", &r);
	area = 22*r*(r/7);// or 
//	area = (22/7)*r*r;// or
//	area = 3.14*r*r; 
	printf("Area of circle having radius  %f m is %f m2", r, area);
}
