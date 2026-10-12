#include <unistd.h>
void    ft_ft(int *nbr)
{
    *nbr = 42;
}
int main()
{
    int nbr;
    ft_ft(&nbr);
    int a;
    int b;
    a = ((nbr / 10) + '0');
    b = ((nbr % 10)+ '0');
    write(1, &a, 1);
    write(1, &b, 1);
}
