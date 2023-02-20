#include <stdio.h>
#include<unistd.h>
#include<string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- print without any functions listed in the NAME section of the man(3)
*
*
*Return: 1
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = strlen(str);

write(1, str, len);

return (1);
}
