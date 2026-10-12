#include <unistd.h>

int     str_len(char *len)
{
    int i;
    i = 0;
    while(len[i])
    {
        i++;
    }
    return(i);
}
int    test_base(char *base)
{
    int best_len;
    best_len = str_len(base);
    int a;
    int b;
    b = 0;
    if(best_len <= 1)
    {
        return 0;
    }
    while(base[b])
    {
        a = 1;
        if(base[b] == '-' || base[b] == '+' || base[b] <= 32 || base[b] > 126)
        {
            return 0;
        }
        while(base[a])
        { 
            if(base[a] == base[b] && a != b)
            {       
                return 0;
            }
         a++;
        }
    b++;
    }
    return(best_len);
}
void    base_rec(char *base,long nb, long lene)
{
    char r;
    if(nb >= lene)
    {
        base_rec(base, nb / lene, lene);
    }
    r = base[nb % lene];
    write(1, &r, 1);
}
void	ft_putnbr_base(int nbr, char *base)
{
    long lene;  
    long nb;
    lene = test_base(base);
    if(lene == 0)
    {
        return;
    }
    nb = nbr;
    if(nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    base_rec(base ,nb, lene);
}
int main()
{
   ft_putnbr_base(2007, "01");
}
