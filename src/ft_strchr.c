/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 22:01:48 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/06 12:28:17 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	c = (unsigned char)c;
	i = -1;
	len = ft_strlen(s);
	while (++i <= len)
	{
		if (s[i] == c)
			return ((char*)s + i);
	}
	return (0);
}
