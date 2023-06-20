#include"main.h"

/**
 * _islower : function to check if character is lowercase.
 * @c: check input of function
 * return : returns 1 if 'c' is lowarcase
 *	otherwise always (0) sucsses
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
