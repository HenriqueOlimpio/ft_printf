char *ft_printf(const char *format, ...)
{
    va_list ap;
    int i;
    int ret;
    
    i = 0;
    ret = 0;
    
    va_start (ap, format);
    //This loop run through the string.
    while (format[i])
    {
        if (format[i] == % && ft_strchr("cspdiuxX%", format[i + 1]))
        {
           ret+= ft_printf_arg(format, i, ap);
           i++;
        }
        else
        {
            if (format != "%")
                ret +=ft_putchar(format[i]);
        }
        i++;
    }
    va_end(ap);
    return (ret);

    }