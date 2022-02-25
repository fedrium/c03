/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuxian <cyu-xian@student.42kl.edu.my>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:43:37 by cyuxian           #+#    #+#             */
/*   Updated: 2022/02/25 15:57:01 by cyuxian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(src);
	while (i >= 0)
	{
		dest[i] = src[0];
		i++;
		src[0]++;
	}
	dest[i] = '\0';
	return (dest);
}
