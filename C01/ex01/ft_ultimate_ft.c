#include <unistd.h>

/*Écrire une fonction qui prend un pointeur sur pointeur sur pointeur 
sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur 
sur int en paramètre et donne à l’int la valeur de 42.*/

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
/*
int		main(void)
{
	int a, *b, **c, ***d, ****e, *****f, ******g, *******h, ********i, *********j;


	j = &i;
	i = &h;
	h = &g;
	g = &f;
	f = &e;
	e = &d;
	d = &c;
	c = &b;
	b = &a;

	ft_ultimate_ft(j);
	if (a == 42)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
*/