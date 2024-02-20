#define _USE_MATH_DEFINES //pi is in math.h, but it seems you want this
#include <stdio.h>
#include <math.h> //gives me pi
int main(void){
    double height = 0;
	double volume = 0;
	double radius = 2.2;
	printf("Enter height: ");
	scanf("%lf", &height);
	
	
	// Your code below here
	if(height < 0){
		height *= -1; //if height is less than 0 (negative), we dont want it to produce a negative volume, so multiply it by -1 to make it positive
	}
	volume = height * M_PI * radius * radius; //volume of a cylinder is Pi*r^2 * height
	
	
	
	// Do not edit below here
	printf("Volume: %.2f", volume);
	return 0;
}