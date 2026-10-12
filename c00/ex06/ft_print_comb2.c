#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_comb2(void)
{
    int nb1;
    int nb2;
    nb1 = 0;
    while(nb1 <= 98)
    {
        nb2 = nb1 + 1;
        while(nb2 <= 99)
        {
            ft_putchar((nb1 / 10 )+ '0');
            ft_putchar((nb1 % 10)+ '0');
            write(1, " ", 1);
            ft_putchar((nb2 / 10) + '0');
            ft_putchar((nb2 % 10) + '0');
            if(nb1 != 98)
            {
                write(1, ", ", 2);
            }
            nb2++;
        }
        nb1++;
    }
    write(1, "\n", 1);
}
int main()
{
    ft_print_comb2();
}