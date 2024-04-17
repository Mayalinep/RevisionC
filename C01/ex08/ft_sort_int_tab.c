#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    //On definit: I , sort
    int i;
    int sort;
    int temp;

    i = 1;
    sort = 0;
    temp = 0;
//tant que sort = 0 et que i < size - 1
    while (sort == 0)
    {
        i = 0;
        sort = 1; //On dit que sort = 1
	    while (i < size - 1)
        {
        
            if(tab[i] > tab[i + 1])
            {   
                    //Alors on swap les éléments de la table
                    temp = tab[i];
                    tab[i] = tab[i + 1];
                    tab[i + 1] = temp;
                    sort = 0; // on dit que le tableau est toujours pas ranger
            }
            i++;
        }
    }
}
/*
#include <stdio.h>

int		main(void)
{
	int c[5] = {55,-10,59,0,54};
	ft_sort_int_tab(c, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
}
*/