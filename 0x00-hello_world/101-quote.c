#include <unistd.h>

/**
* main - "Prints and that piece of art is useful" - Dora Korpar, 2015-10-19"
* Return: prints error message to stderr (1)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
, 59);
	return (1);
}
