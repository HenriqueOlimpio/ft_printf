int *ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    if(!str)
    {
        write(1, "(null)", 6);
        return(6);
    }
    
    while(str[i])
        i++;
    write(1, str, len);
    return (i);
}

int ft_strchr(char s, int c)
{
    while(*s)
    {
        if(*s == char(c))
            return ((char *)s);
            s++;
    }
    if ((char)c == '\0')
        return(return(char *)s);
    return (NULL);
}