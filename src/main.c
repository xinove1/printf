#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

void test()
{
	printf("Expected: ");
	printf("|guys %c %c|\n", 'f', 'u');
	ft_printf("Outcome:  ");
	ft_printf("|guys %c %c|\n", 'f', 'u');
	printf("\n");

	printf("Expected: ");
	printf("|guys %% %c|\n", 'f');
	ft_printf("Outcome:  ");
	ft_printf("|guys %% %c|\n", 'f');
	printf("\n");

	printf("Expected: ");
	printf("|guys %s|\n", "maaaanow < / 3");
	ft_printf("Outcome:  ");
	ft_printf("|guys %s|\n", "maaaanow < / 3");
	printf("\n");

	printf("Expected: ");
	printf("|guys %p|\n", "maaaanow < / 3");
	ft_printf("Outcome:  ");
	ft_printf("|guys %s|\n", "maaaanow < / 3");
	printf("\n");

}

int main(void)
{
	test();
	return 0;
}
