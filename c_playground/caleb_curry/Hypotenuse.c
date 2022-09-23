#include <math.h>
#include <stdio.h>

int main(void)
{
	double a;
	printf("What is the value of the opposite: ");
	scanf("%lf", &a);

	double b;
	printf("What is the value of the adjacent: ");
	scanf("%lf", &b);

	double c = (a * a) + (b * b);
	double Hypo;
	Hypo = sqrt(c);

	printf("The longest side of this traingle is %f\n", Hypo);
	
	return(0);

	//hypotenuse = a ** a + b ** b = c ** c
}
