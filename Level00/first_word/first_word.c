#include <unistd.h>
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
int main(int ac, char **argv)
{
    if ( ac != 2)
        return(write(1,"\n",1),0);
    int i = 0;
    while (argv[1][i] == ' ')
    i++;
    while(argv[1][i] != ' ' && argv[1][i])
    {
        write(1,&argv[1][i],1);
        i++;
    }
    write(1,"\n",1);
    return(0);
}
       