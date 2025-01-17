// WAP to find volume of cube.

#include <stdio.h>
#include <conio.h>;

int main(){
	float v, l;
	printf("\nEnter the length of the cube: ");
	scanf("%d", &l);
	v = l*l*l;
	printf("Volume of the cube is %f", v);
	// getch();
	return 0;
}
