#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- print the last digit of the number stored in the variable n
*check last digit is is greater than 5
*or is 0
*or is less than 6 and not 0
*Return: 0
*/
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last_digit = n % 10;
if (last_digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
else if (last_digit < 6 && last_digit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
else
printf("Last digit of %d is %d and is 0\n", n, last_digit);
return (0);
}
