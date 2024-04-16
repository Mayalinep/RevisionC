#include <unistd.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while(s[i]!='\0')
    {
        i++;
    }
    return (i);
}
/*
#include <stdio.h>

int main(int argc, char  **argv)
{
    if (argc == 2)
    {
        write(1, "The length of the string is ", 28);
        printf("%d\n",ft_strlen(argv[1]));
    }
    else
        write(1, "\n", 1);
    return (0);
}
*/