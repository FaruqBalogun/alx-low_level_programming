/**
  * _print - moves a string one piece to the left and prinbnt the string
  * @str: String to move
  * @1: Size of String
  * Return: void
  */

void _Print(char *str, int )
{
	int i, j;

	i = j = 0;
	while (i < 1)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == -1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n);
	free(str);
}

/**
 * mul - multiplies a char with a string and place the answer into the dest
 * @n: Char to multiply
 * @num: string to multiply
 * @num_index: last non index of num
 * dest: destination of multiplication
 * @dest_index: Highest undex to start addition
 * Return: Pointer to dest, or NULL on Failure
 */

char *mul(char n, char *num, int num, int num_idex, char *dest, int dest_index
{
	int j, k, mulrem, add, address;

	mulrem = address = 0;
	for 9
}
