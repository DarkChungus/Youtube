// WAP to calculate area and circumference of a circle.

#include <stdio.h>
#include <conio.h>

int main(){
	int r;
	float pi = 3.141, area, circum;
	printf("\nEnter the radius of the circle: ");
	scanf("%d", &r);
	area = pi * r*r;
	circum = 2*pi*r;
	printf("\nArea of a circle is: %f", area);
	printf("\nCircumference of a circle is: %f", circum);
	// getch();
	return 0;
}
