#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
	int  i;
    
    i = 0;
    while(src[i] !=  '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
void ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] !=  '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[300];
    char str2[] = "World!";
    ft_putstr(ft_strcpy(str1, str2));
    write(1, "\n", 1);
    ft_putstr(strcpy(str1, str2));
}
    