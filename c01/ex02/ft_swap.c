#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int tap;
    tap = *a;
    *a = *b;
    *b = tap;
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_putnbr(int nb)
{
   
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10)+'0');
}
int main()
{
    int a = 767;
    int b = 22;
    ft_swap(&a, &b);
    write(1, "a=", 3);
    ft_putnbr(a);
    write(1, "\nb=", 3);
    ft_putnbr(b); 
}