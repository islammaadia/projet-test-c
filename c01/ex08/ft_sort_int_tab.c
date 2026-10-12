#include <unistd.h>
void    ft_sort_int_tab(int *tab, int size)
{
 int i;
 int tmp;
 i = 0;
 while(i < size -1)
 {
    if(tab[i] > tab[i + 1])
    {
        tmp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = tmp;
        i = 0;  
    }
    else
    {
        i++;
    }
 }

}
int main()
{
    int tab[] = {5,7,3,1,4,2};
    int size = 6;
    int o;
    o = 0;
    char c;
    ft_sort_int_tab(tab, size);
    while(o < size)
    {
        c = tab[o] + '0';
        write(1, &c , 1);
        o++;
    }
}
//  5 7 3 1 4 2 