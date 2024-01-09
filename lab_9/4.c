#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,t;
	int r=0;
	
	
	printf("Enter a number");
	scanf("%d",& n);
		t=n;
	while (t!=0){
		r=r*10;
		r=r+t%10;
		t=t/10;
		
	}
	
	if (r ==n){
		printf("number is a palindrome\n ",n);
	}
	else{
		printf("number is not a palindrome\n",n);
	}
	return 0;
}
