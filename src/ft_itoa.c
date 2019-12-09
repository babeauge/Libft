/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:24:48 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/06 14:35:37 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		length(int n)
{
	int				len;

	len = 1;
	if (n == -2147483648)
		return (12);
	if (n >= 0 && n <= 9)
		return (2);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while ((n = n / 10) > 0)
		len++;
	return (len + 1);
}

static char		*nega(int n, char *itoa)
{
	if (n == 1)
	{
		itoa[0] = '-';
		return (itoa);
	}
	else
		return (itoa);
}

char			*ft_itoa(int n)
{
	unsigned int	nb;
	int				neg;
	int				len;
	char			*itoa;

	len = length(n);
	neg = 0;
	if (!(itoa = (char *)malloc(sizeof(*itoa) * len)))
		return (NULL);
	itoa[--len] = '\0';
	if (n == 0)
		itoa[--len] = '0';
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	nb = n;
	while (nb > 0)
	{
		itoa[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (nega(neg, itoa));
}
