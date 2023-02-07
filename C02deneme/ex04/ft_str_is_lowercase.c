#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int counter;

    counter = 0;
    if (str[counter] == '\0')
	{
		return (1);
	}
    while (str[counter] != '\0')
    {
        if ((str[counter] <= 'z') && (str[counter] >= 'a'))
            counter ++;
        else
            return (0);
    }
    return (1);
}

int main()
{
    printf("%d\n", ft_str_is_lowercase("sElamlar"));
}