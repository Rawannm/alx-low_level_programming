/**
 * _putchar - writes the character
 * @c: The char
 *
 * Return: 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

