
/**
 * _isupper - checks whether character is in upper case.
 * @c: integer value of character to check.
 * Return: returns 1 (True) if uppercase, or 0 (False)
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

