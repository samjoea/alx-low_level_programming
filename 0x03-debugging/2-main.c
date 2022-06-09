#include "main.h"

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int a, b, c;
        int largest;

        a = 90;
        b = 90;
        c = 90;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
