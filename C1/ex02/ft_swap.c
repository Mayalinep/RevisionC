#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a  = *b;
    *b  = temp;
}

#include <stdio.h>
int main()
{
    int nbr1, nbr2 ;

    nbr1 = 56789;
    nbr2 =  12345;
    printf("Before swapping:\nnombre 1=%d\nnombre 2=%d\n", nbr1, nbr2);
    ft_swap(&nbr1, &nbr2);
    printf("\nAfter swapping:\nnombre 1=%d\nnombre 2=%d\n", nbr1, nbr2);
    return (0);
}