#include <unistd.h>
/**
* _putchar - to write the char cabs
* @c :the char 
* 
* Return :1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
