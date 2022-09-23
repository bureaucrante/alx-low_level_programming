#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	int slices;
	printf("how many slices ddid you eat? ");
	scanf("%d", &slices);

	switch (slices)
	{
		case 1:
			printf("one slice\n");
			break;
		case 2:
			printf("two slices\n");
			break;
		case 3:
			printf("three slices\n");
			break;
		case 4:
			printf("four slices\n");
			break;
		default:
			printf("you did way too much.\n");
			break;
	
	}

	return(0);
}

// clearly, switch statements fuction just like doubles, however, the above syntax of case; command; break; must be followed to a t. Tis operation creats branches in the code that can run individually, unlike the if statemtn which requires an else if to function in the same way. 
// switch statements sumularly come with limitations, for example, this kind of statement may only be used with integer data types, so if the variable is adouble, all you'd get is an error message. 
