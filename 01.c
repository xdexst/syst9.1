#include <stdio.h>
#include <math.h>

double calcLenSide(double xA, double yA, double xB, double yB) {
	return sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));
}

double calAreaTriangle(double a,double b,double c) {
	double halfPerim = 0.0;
	halfPerim = (a + b + c)/2;
	return sqrt(halfPerim*(halfPerim - a)*(halfPerim - b)*(halfPerim - c));
}
int main () {
	printf(".\n");
	double xA = 2.0;
	double yA = 4.0;
	double xB = 4.0;
	double yB = 2.0;
	double xC = 2.0;
	double yC = 2.0;
	
	double lenSideA =0;
	double lenSideB =0;
	double lenSideC =0;
	lenSideA = calcLenSide (xB, yB, xC, yC);
	lenSideB = calcLenSide (xA, yA, xC, yC);
	lenSideC = calcLenSide (xA, yA, xB, yB);
	double areaTriangle = calAreaTriangle(lenSideA, lenSideB, lenSideC);
	printf ("A(%6.2f, %6.2f)\n", xA, yA);
	printf ("B(%6.2f, %6.2f)\n", xB, yB);
	printf ("C(%6.2f, %6.2f)\n", xC, yC);
	printf ("Length a: %5.2f\n", lenSideA);
	printf ("Length b: %5.2f\n", lenSideB);
	printf ("Length c: %5.2f\n", lenSideC);
	printf ("Area of triangle: %5.2f\n",areaTriangle);
	return 0;
}
