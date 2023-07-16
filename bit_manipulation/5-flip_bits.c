Skip to content
Shadi-Shwiyat
/
holbertonschool-low_level_programming

Type / to search
Command palette
Create new...
Issues
Pull requests
You have unread notifications
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Breadcrumbsholbertonschool-low_level_programming/0x14-bit_manipulation
/5-flip_bits.c
Go to file
t
Latest commit
Shadi-Shwiyat
Shadi-Shwiyat
Function returns the number of bits you need to flip to get from one …
de87acf
 · 
4 months ago
History
File metadata and controls

Code

Blame
29 lines (24 loc) · 522 Bytes
#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	diff = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}

	return (count);
}
holbertonschool-low_level_programming/0x14-bit_manipulation/5-flip_bits.c at master · Shadi-Shwiyat/holbertonschool-low_level_programming
