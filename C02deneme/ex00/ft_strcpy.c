#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int sayac = 0;
    while (src[sayac] != '\0')
    {
        dest[sayac] = src[sayac];
        sayac ++;
    }
    dest[sayac] = '\0'; 
    return (dest);
}

int main()
{
    char name[5] = "murat";
    ft_strcpy(name, "mert");
    printf("%s\n", name);
}