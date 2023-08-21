int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
* add - computes addition of two integers
* @a: first integer
* @b: second integer
* Return: sum
*/

int add(int a, int b)
{
	return (a + b);
}

/**
* sub - computes sub of two integers
* @a: first integer 
* @b: second integer 
* Return: subtract
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - computes multiplication of two integers
* @a: first integer 
* @b: second integer 
* Return: multiple
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - computes division of two integers
* @a: first integer 
* @b: second integer 
* Return: dividend integer
*/

int div(int a, int b)
{
	return (a / b);
}

/**
  mod - gives the modulus of two integers
  @i: first integer
  @k: second integer
  Return:  modulus
*/

int mod(int a, int b)
{
	return (a % b);
}
