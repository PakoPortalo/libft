#include "libft.h"
#include "stdio.h"

int  main ()
{
    char *brute;
    char **chop;
    int i;

    brute = "Hola caballeros cómo están";
    chop = ft_split(brute, ' ');
    i = 0;

    while (i != 4)
    {
        printf("%s\n", chop[i]);
        i++;
    }

    return (0);
}