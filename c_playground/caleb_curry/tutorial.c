#include <stdio.h>

int main()
{
	int x = 10;

	int y = x/2;

	printf("Hey! The number you're looking for is %i and the value of x is %i\n",y,x);
	return 0;

}
//nb: the newline character occurs within the parameters of the function (""). It will not work otherwise.
//also note, to print any integerm the precursory "%i" must also be included within the parameters, else, an error message will be sent back. 
//also, also again, string, or text can be entered before within the parameters and it still computes the response, as long the the aforementioned placeholder is available. 
