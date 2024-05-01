
int	ft_strcmp(int *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

long	ft_atol(const char *str)
{
	unsigned char	*ptr;
	long			sign;
	long			nbr;

	nbr = 0;
	sign = 1;
	ptr = (unsigned char *) str;
	while (*ptr == ' ' || *ptr == '\t' || *ptr == '\n'
		|| *ptr == '\v' || *ptr == '\f' || *ptr == '\r')
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	if (*ptr == '+' || *ptr == '-')
		return (0);
	while (*ptr != '\0' && *ptr >= '0' && *ptr <= '9')
	{
		nbr = nbr * 10 + (*ptr - '0');
		ptr++;
	}
	nbr *= sign;
	return (nbr);
}