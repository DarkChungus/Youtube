// WAP that reads any three numbers and displays the largest one.

#include <stdio.h>
#include <conio.h>

int main(){
	int a, b, c;
	printf("\nEnter any three numbers: ");
	scanf("%d %d %d", &a,&b,&c);
	
	if(a>b && a>c){
		printf("\n%d is the greatest number",a);
	}
	else if(b>a && b>c){
		printf("\n%d is the greatest number",b);
	}
	else{
		printf("\n%d is the greatest number",c);
	}
	// getch();
	return 0;
}
