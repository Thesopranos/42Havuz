#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return(counter);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int counter = 0;
    unsigned int src_len;
    src_len = ft_strlen(src);

    if (size != 0)
    {
        while (src[counter] != '\0' && counter < size - 1)
        {
            dest[counter] = src[counter];
            counter ++;
        }
        dest[counter] = '\0';
    }
    return (src_len);
}

int main()
{
    char src1[] = "Mertcan Cakir";
    char dest1[] = "Hello World";
    char src2[] = "Mertcan Cakir";
    char dest2[] = "Hello World";
    int src1_len;
    int src2_len;
    src1_len = strlcpy(dest1, src1, 12);
    printf("%s\n", dest1);
    src2_len = ft_strlcpy(dest2, src2, 12);
    printf("%s\n", dest2);
    printf("%d\n", src1_len);
    printf("%d\n", src2_len);
}