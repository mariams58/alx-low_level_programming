#include "main.h"
/**
  * s_len - returns lengt of a str
  * @s: pointer to string given
  *
  * Return: length of the string given
  */
int s_len(char *s)
{
	if (s[0] != '\0')
		return (1 + s_en(s + 1));
	return (0);
}

/**
  * match_str - checks if a word is a palindrome
  * @s: pointer to the str
  * @l: index
  * @r: length of the str
  *
  * Return: Alway 1 if true
  */
int match_str(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (s[l] == s[r])
		return (match_str(s, l + 1, r - 1));
	return (0);
}

/**
  * is_palindrome - cecks if a string is a palindrome
  * @s: pointer to the string given
  *
  * Return: 1 if true
  */
int is_palindrome(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (1);
	return (match_str(s, 0, s_len(s) - 1));
}
