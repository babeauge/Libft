/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:25:01 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/05 17:30:27 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*final;
	size_t			len;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	if (!(final = malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		final[i] = (f)(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
