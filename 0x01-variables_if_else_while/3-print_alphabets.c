#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * Description: Print alphabets in lowercase then in uppercase
 * Return: Always 0 (Success/correct)
 */
int main(void)
{

	char alphabets_lowercase, alphabets_uppercase;

	alphabets_lowercase = 'a';

	alphabets_uppercase = 'A';

	while (alphabets_lowercase <= 'z')
	{
		putchar(alphabets_lowercase);
		alphabets_lowercase++;
	}

while (alphabets_uppercase  <= 'Z')
{
putchar(alphabets_uppercase);
alphabets_uppercase++;
}

putchar('\n');
return (0);
}
