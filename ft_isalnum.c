#include "libft.h"

int ft_isalnum(int a)
{
    if (ft_isalpha(a) || ft_isdigit(a))
        return (1);
    return (0);
}