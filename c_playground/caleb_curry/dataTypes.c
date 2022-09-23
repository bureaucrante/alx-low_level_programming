#include <stdio.h>


int main(void)
{
	double dogs;
	printf("How many dogs loser?: ");
	scanf("%lf", &dogs);


	printf("%f\n%e\n%g\n", dogs, dogs, dogs);

	return (0);

}

	//floating point data types
	//the difference between these is the precision.
	//although, the danger is that doubles use twice more space to store date.
	//Since there are only two conversion characters for numeric values though, "%i, %f", that means floating point data types share the same conversion character, and floats get converted to doubles anyways.  
	//Floating point numbers are stored in scientif notation, i.e, number *10^wv
	//It is preferable to enter big numbers using exponential, which is scientific notation in base ten. In this approach, do not use *10^, use the number"e"the exponent instead.
	//
	//
	//
	//Conversion Characters!!!
	
	//%f - decimal notaion (float numbers or wv)
	//%e - scientific notation, for when we use the aforementioned exponent format
	//%g - allows the computer to decide 
		//if the exponent < -4, it will use scientific notation "%e"
		//if the exponent > 5, it will use decimal notation "%f"
	//Because all of these are different ways of representing the same kind of value, double, or float, they must be initiliased with either "double, or float"
	//To collect user input and scan in for a double, the syntax would be scanf("%lf")
	//It seems that for all numeric data types, the address of operator must be included in the scan func. 
