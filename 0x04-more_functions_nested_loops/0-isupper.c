#include "main.h"

/* issupper function checks for an uppercase character
 * returns 1 if c is uppercase
 * else returns 0
*/

int c;

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		putchar(c);
		return(1);
	} else
	  {
	      return(0);
	  }
	  c++;
}
