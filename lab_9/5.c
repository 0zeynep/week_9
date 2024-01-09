#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int n=0;
	int f=1;
	int a=1;
	int t=0;
	
	printf("Enter a number");
	scanf("%d",& x);
	
	
	while(a<=x){
		f=f*a;
		a=a+1;
		
	while (n<x){
		t=t+x^n/f;
		n=n+1;
	}
		f=0;
	}
	 
	printf("%d", t);
	 
	return 0;
}
