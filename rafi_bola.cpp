#include <stdio.h>
#include <math.h>

int main(){
	double diameter = 15.0;
	double radius, volume;
	
	radius = diameter / 2.0;
	
	volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
	
	printf("Volume bola dengan diameter %.2f cm adalah: %.2f cm^3\n",diameter, volume);
	
	return 0;
}
