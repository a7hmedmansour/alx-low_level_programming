#include <stdio.h>
#include <stdlib.h>
/**
*main- a program that prints the minimum
*number of coins to make change for an amount of money.
*
*@argc:a count of the arguments
*
*@argv:the strings which are those arguments
*Return: 0
*/
int main(int argc, char **argv)
{
int cent, money = 0, i;
int values[] = {25, 10, 5, 2, 1};
if (argc == 2)
{
cent = atoi(*++argv);
if (cent < 0)
printf("0\n");
else
{
for (i = 0; i <= 4; i++)
{
money += cent / values[i];
cent %= values[i];
}
printf("%d\n", money);
}
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
