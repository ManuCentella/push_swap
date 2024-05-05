
#include "../include/push_swap.h"



    int is_valid(char *str)
    {
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
    {
        i++; 
        if (str[i] == '\0') // Verificar si el string tiene solo el signo
            return 0;
    }
    while (str[i] != '\0')
    {
        if (!ft_isdigit(str[i])) 
            return 0; 
        i++; 
    }
    return 1;
    }
    
    

int ft_error(long *num, int argc)
{
    int i = 0;

    while (i < argc)
    {
        if (*num < INT_MIN || *num > INT_MAX) {
            write(2, "Error\n", 6);
            return 1;
        }
        i++; // Incrementar i en lugar de num
    }
    return 0; // No se encontraron errores
}




