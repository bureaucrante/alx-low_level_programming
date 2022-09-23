#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool calebIsFat;
	int respo;

	printf("Do you think caleb fat? 1 is true and 0 is false: "); //from this stage, the next step is to actually collect and store the response as a variable.
	scanf("%d", &respo); //now, reassign the bool to the new variable collected so the system can decide if it's true or not.

	calebIsFat = respo;

	if(calebIsFat)
	{
		printf("do some exercise!\n");
	}
	return (0);
}
