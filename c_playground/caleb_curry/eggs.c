#include <stdio.h>

int main()
{
	int eggs;
	printf("How many eggs, bitch: " );
	scanf("%i", &eggs);
	
	double dozen = (double) eggs / 12;

	printf("You have a total of %f dozen eggs\n", dozen);
	return 0;

}
//tis relevant to remember that whenever scanf is employed, the address of operator "&VAR_NAME" must also be added after a comma. 

//I actually received my first error code from the compiler because of the erroneous input "int dozen", immediately followed by "double dozen." Remember that both int and double serve the exact same function. 

//In spite of some intial success, the program in its current state remains highly disfunctional, and this is evident in the output it returns for dozens when the number of eggs is not a perfect multiple of 12. We will fix that now.

//Type casting is changing the data type of some value, and this is essential in this problem because in the code &eggs is an integer, and a dozen (12) is also an integer. Hence, when the program evaluates the expression, it will come back with an integer, and a bunch of zeroes after the decimal, with no idea what comes next. Utilizing typecasting, we are able to convert an integer to a double or vice versa, simply by entering the data type in parentheses before within the expression itself i.e, the thing that will nedd to be solved, in this case eggs/12. 

//The solution is simple (double) eggs / 12.
