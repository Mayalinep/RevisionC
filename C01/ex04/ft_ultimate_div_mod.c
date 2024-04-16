#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int mod  = *a % *b;

    *a = div;
    *b = mod;
}
/*
#include <stdio.h>

int main() 
{
	int a = 100;
	int b = 5;

	printf("Initial values: a=%d\n", a);
	printf("Initial  values: b=%d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("\nafter function call : a=%d\n", a);
    printf("after function call : b=%d\n", b);
    
	return (0);
}
*/