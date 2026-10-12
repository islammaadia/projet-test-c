#include <unistd.h>

int     ft_str_len(char *len)
{
    int a;
    a = 0;
    while(len[a])
    {
        a++;
    }
    return(a);
}
int     ft_test_base(char *base)
{
    int lenere;
    lenere = ft_str_len(base);
    if( lenere <= 1)
    {
        return 0;
    }
    int b;
    int c;
    b = 0;
    while(base[b])
    {
        c = 0;
        if(base[b] == '-' || base[b] == '+' || base[b] <= 32 || base[b] > 126)
        {
            return 0;
        }
        while(base[c])
        {
            if(base[c] == base[b] && c != b)
            {
                return 0;
            }
            c++;
        }
        b++;
    }
    return(lenere);
}

void    ft_base_rec(long nb,char *base,long lenr)
{
    char h;
    if(nb > lenr)
    {
        ft_base_rec(nb / lenr , base, lenr);
    }
    h = base[nb % lenr];
    write(1, &h, 1);
}
void	ft_putnbr_base(int nbr, char *base)
{
    
    long lenr;
    long nb;
    lenr = ft_test_base(base);
    nb = nbr;
    if(nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    ft_base_rec(nb, base,lenr);
}
int main()
{
    ft_putnbr_base(2007, "01");
}