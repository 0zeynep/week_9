#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,C;
	printf("Enter three numbers");
	scanf("%d",& A);
	scanf("%d",& B);
	scanf("%d",& C);
	
	if (A>B && A>C){ 
		printf("the largest number is %d",A);
	}
	else if (B>A && B>C){
	
		printf("the largest number is %d",B);
	}
	else {
		
		printf("the largest number is %d",C);
	}
	
	
	return 0;
}
