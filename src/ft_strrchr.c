/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 22:15:08 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/04 12:18:00 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ret;

	len = ft_strlen(s);
	c = (char)c;
	while (len > 0)
	{
		if (s[len] == c)
		{
			ret = ((char*)s + len);
			return (ret);
		}
		len--;
	}
	if (s[0] == c)
		return ((char *)s);
	return (0);
}
