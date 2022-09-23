#include <stdio.h>

int main(void)
{
	int pizzas = 100;
	pizzas += 100; // increases the value by 100
	pizzas -= 100; // reduces the value by 100
	pizzas *= 2; // multiplies the value by 2
	pizzas /= 4; // divides the value by 4
	pizzas %= 5; // dividees the value by 5 and prints the remainder. 
	
	printf("%i\n", pizzas);

	return(0);

}

//This is increment assignemnt or whatever, basically, adding the operator before the equal sign while declaring it, changes the value. 
//% is the modulo symbol, and arithmetically functions to find the remainder left in an expression. 
