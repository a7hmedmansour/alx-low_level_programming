#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- check number
*
*Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%dis positive\n",n);
else if (n < 0)
printf("%dis negative\n",n);
else
printf("%.1dis zero\n",n);

return (0);
}
