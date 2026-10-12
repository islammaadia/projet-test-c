#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while(i <= str[i])
    {
        write(1,&str[i], 1);
        i++;
    }
}
int main()
{
    int i;
    char str[]= "islam654";
    ft_putstr(str);
}