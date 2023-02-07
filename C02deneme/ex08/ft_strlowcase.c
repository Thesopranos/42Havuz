#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str)
{   
    int counter;
    
    counter = 0;
    while (str[counter] != '\0')
    {
        if ((str[counter] <= 'Z') && (str[counter] >= 'A'))
            str[counter] += 32;
        counter ++;
    }
    return (str);
}

int main()
{
    int i = 0;

    char ifade[] = "MeasfasfASFASFASFASF asf fasFASFASkir";
    printf("%s\n", ft_strlowcase(ifade));
    i++;

}