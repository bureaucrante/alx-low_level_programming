
#include <stdio.h>

int main()
{
	int radius;
	printf("Type, bitch: ");
	scanf("%i", &radius);

	double area;
	area = 3.142 * (radius * radius);

	printf("The area of a circle with %i radius is %f\n", radius, area);
	return 0;

}
//scanf is a function which enables the programmer to read input from the user. The value of such an input is stored in a variable defined by the user. This variable must begin with ampersand '&' followed by whatever the user chooses to call it. "&VAR_NAME" is technically called the "address-of operator." 

//of course,this code is incomplete without any actual instructions for the user demanding an input. Such an instruction is called a "user prompt." In this case, the user prompt appears before the scan. Lets compile and see how it looks. 

//%i is called a conversion character, and there are many conversion whatevers for different kinds of data types. 

//in this code, we face an issue as we try to further develop our code with the intention of getting it to find the area of a circle. 

//the area of a circle is pi * radius square. but, pi is a floating number, not an integer, and the above code asks for an integer. Enterting the correct decimal value for pi is called a logical error and would return an error message. 

//to bypass this error, a new data type is required, serving the purpose of replacing "int" in the above code. The data type is "double", and without it, whatever    decimal value that is obtained would simply be 'truncated,' meaning, whatever comes after the decimal point would get deleted. When the data type changes, the conversion character must change as well. As "%i" is specifically for 'int', it would not work with 'double.' But, as mentioned earlier, decimal values are called floating  values, thus, the conversion character for double is "%f"
