#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*
 * _putchar - check the code for Holberton School students.
 */
int _putchar(char c);

/*
 * _print_alphabet - print alphabet in lower case.
 */
void print_alphabet(void);

/*
 * _print_alphabet_x10 - print alphabet in lower case, 10 times.
 */
void print_alphabet_x10(void);

/*
 * _islower - verifies whethre a given value corresponds to the
 * ASCII range 97 - 122
 */
int _islower(int c);

/*
 * _isalpha - Verifies whether a given value is an alphabet.
 * ASCII range 97 to 122 and 65 to 90.
 */
int _isalpha(int c);

/*
 * print_sign - prints the sign of a number.
 */
int print_sign(int n);

/*
 * _abs - prints the absolute value of a number.
 */
int _abs(int);

/*
 * print_last_digit - prints the last digit of a  number.
 */
int print_last_digit(int);

/*
 * jack_bauer - prints every minute of the day.
 */
void jack_bauer(void);

/*
 * times_table - prints numbers in a given pattern.
 */
void times_table(void);

/*
 * add - adds two integers
 */
int add(int, int);

/*
 * print_to_98 - prints numbers from n to 98.
 */
void print_to_98(int n);

/*
 * print__times_table - prints n times table, starting with 0
 */
void print_times_table(int s);

/*
 * add_multiples - prints the sum of multiples of 3 and 4.
 */
void add_multiples(int n);

/*
 * print_fibonacci - prints the fibonacci series.
 */
void print_fibonacci(int max);

/*
 * _isupper - checks whether a chr is in upper case.
 */
int _isupper(int c);

/*
 * _isdigit - checks whether a char is a number.
 */
int _isdigit(int c);

/*
 * mul  - multiplies two digits.
 */
int mul(int a, int b);

/*
 * print_numbers - prints 0 - 9.
 */
void print_numbers(void);

void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif

