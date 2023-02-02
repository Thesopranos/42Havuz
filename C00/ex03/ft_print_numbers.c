#include<unistd.h>

void ft_print_numbers(void)
{   
    char karakter = '0';
    while (karakter <= '9') {
        write(1, &karakter, 1);
        karakter++;
    }

}

int main()
{
    ft_print_numbers();
}