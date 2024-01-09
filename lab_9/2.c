#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n ;
	int f=1 ;
	int x=1;
	
	
	printf("Enter a number");
	scanf("%d",& n);
	
	while (x<=n){
		f=f*x;
		x=x+1;
		
		
	}
	printf("%d",f);
	
	return 0;
}
