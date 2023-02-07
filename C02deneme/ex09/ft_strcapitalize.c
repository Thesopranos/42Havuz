#include <stdio.h>

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

char *ft_strcapitalize(char *str)
{
    int counter;
    int word_status = 0;
    counter = 0;
    ft_strlowcase(str);
    while(str[counter] != '\0')
    {   
        if (str[counter] >= 'a' && str[counter] <= 'z')
        {   
            if (counter == 0)
                str[counter] -= 32;
            else if (word_status == 1)
                str[counter] -= 32;
                word_status = 0;
        }
        else if (str[counter] >= '0' && str[counter] <= '9')
            word_status = 0;
        else
            word_status = 1;
        counter ++;
    }
    return (str);
}

int main()
{
     char ifade[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
     printf("%s", ft_strcapitalize(ifade));
}