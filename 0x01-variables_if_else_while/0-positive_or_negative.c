#include <stdlip.h>
#include <time.h>
/**
*main- print if the number is (zero, posetive, negative)
*
*Description: using the main function.
*this program prints 'programming is posetive or negative, or zero '
*Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n)
}
return (0);
}

