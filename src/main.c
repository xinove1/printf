#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

void test()
{
	printf("Expected: \n");
	printf("\n");
	ft_printf("Outcome: \n");
}

int main(void)
{
	test();
	return 0;
}
