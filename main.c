#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if (n<2)
		return n;
	else if (n=2)
		return 1;
	else if (n>2)
		return fib(n-1)+fib(n-2);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Please type a number : ");
	scanf("%d",&n);
	printf("%d",fib(n));
		
	return 0;
}
