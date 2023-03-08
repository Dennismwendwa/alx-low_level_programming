#include "main.h"


/**
  * palindromeString - checking iif string is palindrome.
  * @len:- single user input.
  * @i:- single user input.
  * @len:- varible tracker.
  * @str:- single user input.
  * Return:- Always 0 (success)
  */

int palindromeString(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	{
		return (palindromeString(str, len - 1, i + 1));
	}

	if (str[i] != str[len])
	{
		return (0);
	}

	return (1);

}

/**
  * _strlen_recursion - function that checks length of string.
  * @s:- single user input.
  * Return:- Always 0 (success)
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}


/**
  * is_palindrome - Function to check if string is palindrome.
  * @s:- single user input.
  * Return:- always 0 (success).
  */

int is_palindrome(char *s)
{
	int k = 0;
	int leng;

	leng = _strlen_recursion(s) - 1;

	return (palindromeString(s, leng, k));

}
