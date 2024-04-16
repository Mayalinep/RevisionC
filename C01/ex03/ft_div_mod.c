#include <unistd.h>

/*Cette fonction divise les deux paramètres a et b et stocke le resultat dans 
l’int pointé par div.Elle stocke également le reste de la division de a et b 
dans l’int pointé par mod.*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
/*
#include <stdio.h>

int main() {
	int div;
	int mod;

	ft_div_mod(10, 5, &div, &mod) ;
	printf("Division : %d\n", div);
	printf("Modulo   : %d\n", mod);
	return (0);
}
*/