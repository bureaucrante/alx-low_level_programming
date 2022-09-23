#include <stdio.h>

int main(void)
{
	//arithmetic operators (+-/*) work using the Pemdas rule, called operator prescedence in computer science.
	//To implement this, you would have to isolate the preceeding operator and its operands in parentheses, beginning from most relevant to least. 
	//Since the precedence is innately understood by the machine, however, adding the parenthesis becomes redudant for casual operations. 
	//They would serve a better purpose of the programmer specifically wants to establish a new precedence that goes against the natural order.  
	
	int x = 10+(8-4)*4/5;
	printf("%i\n", x);
	return(0);
}
