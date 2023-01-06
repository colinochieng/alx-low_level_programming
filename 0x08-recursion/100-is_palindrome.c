/**
*_strlen_recursion - finds string length
*@s: pointer for string
*Return: returns the length of a string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (_strlen_recursion(s + 1) + 1);
}

/**
*return_palindrome - checks if a string is palindrome
*@i: recursion parameter
*@str: string pointer
*Return: 0 or 1
*/

int return_palindrome(int i, char *str)
{
if (*str)
{
if (*str != str[_strlen_recursion(str) - i])
return (0);

return (return_palindrome(i + 1, str + 1));
}

return (1);
}

/**
*is_palindrome - ckecks for paliondrome
*@s: string pointer
*Return: value of return_palindrome
*/

int is_palindrome(char *s)
{
return (return_palindrome(1, s));
}
