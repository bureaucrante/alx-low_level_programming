#include <stdio.h>

int main(void)
{
	int money = 25;
	int bill = 15;
	
	int total = money - - bill;

	printf("%i\n", total);

	return (0);
}

//that's basically all there is to know about unary operators, they worke xactly like algebraic operators essentially. 
//Increment and Decrement operators, can be illustrated by the simple expression. 
	//pizzas = 123
	//pizzas = 123 + 1; basically increasing the value by one. This format would be fine if the value increases by more than one, but in the case of increasing byjust one, there is a more acceptable convention,
	//pizza++; this increases the value of pizzas by 1
