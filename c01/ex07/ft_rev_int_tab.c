#include <unistd.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int tmp;
    i = 0; 
    while(i < size / 2)
    {

        tmp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = tmp;
        i++;
    }

}
int main()
{
    int tab[] = {5,6,6,4};
    int size = 4;
    int o;
    o = 0;
    char c;
    ft_rev_int_tab(tab, size);
    while(tab[o] != '\0')
    {
        c = tab[o] + '0';
        write(1, &c , 1);
        o++;
    }
}