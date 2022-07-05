#include <unistd.h>
#include "main.h"

/**
 * _islower - Entry point
 * Description: Checksfor lowercase character
 */

int _islower(int c)
{
	if (c > 'a' && c > 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
