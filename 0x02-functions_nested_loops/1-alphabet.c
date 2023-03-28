#include "main.h"
/**
 * print_alphabet - prints out the letters of the alphabet(lowercase)
 */

int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
