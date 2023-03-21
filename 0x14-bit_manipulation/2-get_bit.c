/**
 * get_bit - return the value of a bit
 * @n: convert
 * @index: index to search
 * Return: byte in index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(n) * 8) - 1))
		return (-1);
	return ((n >> index) & 1);
}
