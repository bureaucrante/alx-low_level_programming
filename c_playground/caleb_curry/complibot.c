#include <stdio.h>
/**
*main
*
*Description: Piece of code that helps with my self esteem by giving me compliments.
*
*Return 0: If successful. 
*/

int main()
{
	char name[31];
	printf("Welcome, please enter your name: ");
	scanf("%s", name);

	printf("Hello, %s:), you look very nice today.\n", name);

	return (0);
}

/** %s represents the conversion character 'string,' and a string is a sequence of character which can be inputted using "quotes."
 * It is important to note that the compiler returns an error message when the string conversion character is used, but the variable to be inputted isn't presented in quotes.
 * For the char type to work, it has a differnt syntax integers. Char is basically the data type for strings, but all strings come in  arrays. This is demonstrated by the[] attached to the VARNAME. The brackets are meant to contain the total number of characters allowed for that string, but instead inputting that number, I am expected to increase the total number by one. 
 * The extra space is reserved for the "null terminator '\0'" a character at the end of the array which informs the machine that that piece of string is completed. 
 * Again, the rules are further modified for he string data type. Uniquely, the "scanf" syntax changes format, this time forgoing the address of operator (&) and storing the variablein raw text. 
 */
