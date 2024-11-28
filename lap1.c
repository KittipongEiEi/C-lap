#include <stdio.h>
int main(){
	int num1;
	int num2;
	printf("num1=<Enter num1> \nnum2=<Enter num2>\n");
	scanf("%d \n %d", &num1,&num2);
	
	if (num1>num2) {
		printf("num1 greater than num2");
	}
	else {
		printf("num2 greater than num1");
	}
	
}
