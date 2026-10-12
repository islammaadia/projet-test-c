#include <unistd.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(i <= str[i])
    {
        i++;
    }
    return(i);
}
int main()
{
    int i;
    char str[] = "kydc";
    i = ft_strlen(str);
    char c = ((i / 10 )+ '0');
    char b =((i % 10) + '0');
    write(1, &c, 1);
    write(1, &b, 1);
    
}