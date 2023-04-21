#include <stdio.h>
/**
 * main - Entry
 * Description: "Print alphabets in lowercase"
 * Return: Always 0
 */
int main(void)
{
	char sl;
	for (sl = "a"; sl <= "z"; sl++)
	{
		putchar(sl);
	}
	putchar("\n");
	return (0);
}
