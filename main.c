#include "main.h"

/**
 * main - Entry point for testing _printf function
 *
 * Return: Always returns 0 (Success)
 */
int main(void)
{
    int characters_printed;

    /* Example usage of _printf for each conversion specifier */

    /* %c: Print a character */
    characters_printed = _printf("Character: %c\n", 'A');

    /* %s: Print a string */
    characters_printed += _printf("String: %s\n", "Hello, World!");

    /* %%: Print a percent symbol */
    characters_printed += _printf("Percent: %%\n");

    /* %d and %i: Print integers */
    characters_printed += _printf("Integer: %d\n", 123);
    characters_printed += _printf("Another integer: %i\n", -456);

    /* Display the total characters printed by _printf */
    _printf("Total characters printed: %d\n", characters_printed);

    return (0);
}
