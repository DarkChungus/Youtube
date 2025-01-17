// WAP to check whether the given number is odd or even.

#include <stdio.h>
#include <conio.h>

int main(){
	int num;
	printf("\nEnter any number: ");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("\n%d is an even number",num);
	}
	else{
		printf("\n%d is an odd number",num);
	}
	// getch();
	return 0;
}
