#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}
/*
#include <stdio.h>
int main()
{
    int number = 10;
    ft_ft(&number); 
    printf("%d\n",number); //Should print "42" but prints "10". Why?
    return (0);
}
*/
