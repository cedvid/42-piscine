#include "./ex02/ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = -58;
	int c = -32;

	printf("Before ABS: %d", a);
	printf("\n");
	printf("Before ABS: %d", b);
	printf("\n");
	printf("Before ABS: %d", c);
	printf("\n");

	ABS(a);
	ABS(b);
	ABS(c);
	
	printf("\n");
	printf("After ABS: %d", a);
        printf("\n");
        printf("After ABS: %d", b);
        printf("\n");
        printf("After ABS: %d", c);
        printf("\n");
	return (0);
}


