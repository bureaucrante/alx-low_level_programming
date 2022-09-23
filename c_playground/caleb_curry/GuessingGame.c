#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/* Author: Winston Yabo
 *
 * Description: Guessing game code
 *
 * Return 0: if successful
 */

int main(void)
{

	srand(time(NULL));
	int maxValue = 5;
	int randomNumber = rand() % (maxValue + 1);
	int userNumber;

	printf("Please enter a number from 0 - %d: ", maxValue);
	scanf("%d", &userNumber);


		if(randomNumber == userNumber)
		{
			printf("Hurray! You win!\n");
		} else
		{
			printf("sorry, the actual number was %d\n", randomNumber);
		}

	return(0);

}

//so far, the point of this code is to create a random number. The number is seeded from the "time(NULL)" function, and generates a random number as stated, now the challnege is to to get  ashorter number and that's where teh modulus operator comes in. 
//The challenge here is to generate a snumber from 0-5 so set the modulus above the upper limit of the number.
