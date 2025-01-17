// WAP to display fibonacci series up to nth term
// 1 1 2 3 5 8 ... nth term

#include <stdio.h>
#include <conio.h>

int main(){
	int a = 0, b = 1;
	int n;
	printf("\nEnter the amount of iterations you want: ");
	fflush(stdout);
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		printf("%d ", b);
		int c = a + b;
		a = b;
		b = c;
	}
}
