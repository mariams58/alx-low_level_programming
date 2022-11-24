#include <stdio.h>
/**
  *print_name - prints out name
  * @name: pointer
  * @f: function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	f = print_name;
	f(name);
}
