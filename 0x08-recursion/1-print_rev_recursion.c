/**
  * _print_rev_recursion - ptints a strig in reverse given a ptr to it
  * @s: ptr given to str
  * 
  * Return: Always 0
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
