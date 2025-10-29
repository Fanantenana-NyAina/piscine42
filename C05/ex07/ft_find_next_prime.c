int ft_is_prime(int nb)
{
    int i;
    if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return 0;
    i = 1;
    while (i <= nb)
    {
        if (nb % i == 0)
        {
            if (i != 1 && i != nb)
                return 0;
        }
        i++;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    while (ft_is_prime(nb) !=1)
        nb++;
    return nb;
}