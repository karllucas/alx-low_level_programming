/**
 * print_numbers - prints numbers between 0 to 9.
 *
 * Return: Always 0
 */
void print_numbers(void)
{
    int ch;

    while (ch >= 48 && ch <= 57)
    {
        _putchar(ch);
        ch++;
    }
    _putchar('\n');
}
