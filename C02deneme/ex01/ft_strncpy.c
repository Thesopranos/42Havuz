#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int counter = 0;
    while (src[counter] != '\0' || counter < n)
    {
        dest[counter] = src[counter];
        counter ++;
    }

    while (counter < n)
    {   
        printf("%d",counter);
        dest[counter] = '\0';
        counter ++;
    }
    return (dest);
}

int main() {
   char dest[] = "Hello World";
   char name[] = "Mer";
   int n = 7;
   char dest1[] = "Hello World";
   char name1[] = "Mer";

   strncpy(dest, name, n);
   printf("%s\n", dest);
   ft_strncpy(dest1, name1, n);
   printf("%s\n", dest1);

   return 0;
}