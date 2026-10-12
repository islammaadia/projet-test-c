#include <unistd.h>

void    *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if(src[i] == '\0')
    {
        dest[i] = '\0';
    }
}int main()
{  
    char *dest;
    char src[] = "lidbc";
    ft_strcpy(dest, src);
    int o;
    o = 0;
    while(dest[o] != '\0')
    {
     write(1, &dest[o], 1);
     o++;
    }
}