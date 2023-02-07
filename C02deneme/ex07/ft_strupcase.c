#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str)
{   
    int counter;
    
    counter = 0;
    while (str[counter] != '\0')
    {
        if ((str[counter] <= 'z') && (str[counter] >= 'a'))
            str[counter] -= 32;
        counter ++;
    }
    return (str);
}

int main()
{
    int i = 0;

    char ifade[] = "asfasf asdasfasfa sfas fasfewfzxczxcqa";
    printf("%s\n", ft_strupcase(ifade));
    i++;

}