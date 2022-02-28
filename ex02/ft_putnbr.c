void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	while (nb != '\0')
	{
		ft_putchar(nb[i]);
		i++;
	}
}

int main()
{
	ft_putnbr(9);
	return (0);
}