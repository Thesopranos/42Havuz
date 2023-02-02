#include<unistd.h>

void  ft_putchar(char karakter) 
{
    write(1, &karakter, 1);
}

int main()
{
    ft_putchar('c');
}