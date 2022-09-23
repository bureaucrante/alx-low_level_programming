#include <stdio.h>
#include <stdbool.h>

/* Author Moi
 *
 * Description: Writing a piece of code that functions as a menu using else if operations
 *
 * The objectives of this code are to 
 * 	1. add a patient
 * 	2. view a patient
 * 	3. search a patient
 * 	4. exit
 *
 * Return: 0 if sucessful
 *
 */

int main(void)
{
	printf("Please select an option\n");
	printf("1. add a patient\n");
	printf("2. view a patient\n");
	printf("3. search a patient\n");
	printf("4. exit\n");

	int input;
	scanf("%d", &input);

	if(input == 1)
	{
		printf("Adding a patient\n");
	
	} else if (input == 2)
	{
		printf("Viewing a patient\n");
	} else if (input == 3)
	{
		printf("Searching a patient\n");
	} else if (input == 4)
	{	printf("4. exit\n");
	
	} else //for else statements, to close out the if loop, there is no longer any need to match input and constant. 
	{
		printf("Sorry, incorrect input\n");

	}

	return(0);
}
