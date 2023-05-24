#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - computes the addiiton of two integer
 * @a: integer input
 * @b: integer input
 * Return: The result of the addition
 */

int op_add(int a, int b)
{
	int res = 0;

	res = a + b;
	return (res);
}
/**
 * op_sub - computes the substraction between two integer
 * @a: integer input
 * @b: integer input
 * Return: The result of the substraction.
 */

int op_sub(int a, int b)
{
	int res = 0;

	res = a - b;
	return (res);
}

/**
 * op_mul - computes the multuplication of two integers
 * @a: integer input
 * @b: integer input
 * Return: The result of the multuplication.
 */

int op_mul(int a, int b)
{
	int res = 0;

	res = a * b;
	return (res);
}

/**
 * op_div - computes the division of two integers
 * @a: integer input
 * @b: integer input
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	int res = 0;

	res = a / b;
	return (res);
}

/**
 * op_mod - returns the remainder of the division of 2 in
 * @a: integer input
 * @b: integer input
 * Return: The reminder.
 */
int op_mod(int a, int b)
{
	int res = 0;

	res = a % b;
	return (res);
}

