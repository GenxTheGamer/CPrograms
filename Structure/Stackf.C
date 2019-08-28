#define MAX 3
int top=-1;
int stack[MAX];
int element;
main(){
	int choice;
	do{
		printf("\n 1. Push \n 2. Pop \n 3. Display \n 4. Exit");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1 : push();
					break;
			case 2 : pop();
					break;
			case 3 : display();
					break;
			default : exit(1);
		}
		
	}while(1);
}
push(){
	if(top<MAX-1){
		printf()
	}
}
