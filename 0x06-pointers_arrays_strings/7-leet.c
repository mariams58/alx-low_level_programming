#include "main.h"
/**
  * leet - replsces letter
  * @wrd: encode it
  *
  * Return: string
  */
char *leet(char *wrd)
{
	int i, j;
	char *letter =   "aAeEoOtTlL";
	char *code = "4433007711";

	for (i = 0; wrd[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (wrd[i] == letter[j])
			{
				word[i] = code[j];
			}
		}
	}
	return (*wrd);

}
