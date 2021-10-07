#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

void test_c()
{
	int a, b = 0;

	printf("Expected: ");
	a = printf("|guys %c %c|\n", 'f', 'u');
	ft_printf("Outcome:  ");
	b = ft_printf("|guys %c %c|\n", 'f', 'u');
	printf("A: %d , B: %d \n", a, b);
	printf("\n");

	printf("Expected: ");
	a = printf("|guys %% %c|\n", 'f');
	ft_printf("Outcome:  ");
	b = ft_printf("|guys %% %c|\n", 'f');
	printf("A: %d , B: %d \n", a, b);
	printf("\n");
}
void test_str()
{
	int a, b = 0;
	printf("Expected: ");
	a = printf("|guys %s|\n", "maaaanow < / 3");
	ft_printf("Outcome:  ");
	b = ft_printf("|guys %s|\n", "maaaanow < / 3");
	printf("A: %d , B: %d \n", a, b);
	printf("\n");

	printf("Expected: ");
	a =printf("|guys %s|\n", "maaaanow < / 3");
	ft_printf("Outcome:  ");
	b =ft_printf("|guys %s|\n", "maaaanow < / 3");
	printf("A: %d , B: %d \n", a, b);
	printf("\n");
}

void test_hex()
{
	int a, b = 0;
	printf("Expected: ");
	a = printf("|guys %x|\n", 2903);
	ft_printf("Outcome:  ");
	b = ft_printf("|guys %x|\n", 2903);
	printf("A: %d , B: %d \n", a, b);
	printf("\n");

	printf("Expected: ");
	a = printf("|guys %X|\n", 2903);
	ft_printf("Outcome:  ");
	b = ft_printf("|guys %X|\n", 2903);
	printf("A: %d , B: %d \n", a, b);
	printf("\n");



	char *t = "mabr";
	printf("Expected: ");
	a = printf("|guys %p|\n", t);
	ft_printf("Outcome:  ");
	b = ft_printf("|guys %p|\n", t);
	printf("A: %d , B: %d \n", a, b);
	printf("aaa\n");
}

int main(void)
{
	test_c();
	test_str();
	test_hex();
	return 0;
}
