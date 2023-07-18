#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

int n;

int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
        /* your code goes there */
int m;
m = n % 10;
if (m > 5)
printf("Last digit of %d is %d and is greater than 5 \n", n, m);
if (m == 0)
printf("Last digit of %d is %d and is 0 \n", n, m);
if (m < 6 && m != 0)
printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, m);
return (0);
=======
/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
>>>>>>> 06684560939c11db3f942e8a6a5fb38ecec74ada
}
