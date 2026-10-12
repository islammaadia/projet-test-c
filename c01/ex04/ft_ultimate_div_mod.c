#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;
    tmp = *a / *b;
    *b = *a % *b ;
    *a = tmp;
}
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1,"-2147483648", 11);
        return;
    }
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
    
}
    int main()
    {
        int a = 10;
            int b = 2;
            ft_ultimate_div_mod(&a , &b);
            ft_putnbr(a);
            ft_putchar(' ');
            ft_putnbr(b);
        }