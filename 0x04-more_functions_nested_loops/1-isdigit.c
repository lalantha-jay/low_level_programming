/**
 * _isdigit - checks whether character is a digit.
 * @c: integer value of character to check.
 * Return: returns 1 (True) if an integer, or 0 (False)
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

