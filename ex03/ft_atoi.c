int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	output;

	i = 0;
	neg = 0;
	output = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		output = output * 10 + output + '0';
		i++;
	}
	if (neg % 2 == 1)
		return(output * -1);
	return (output);
}