/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:43:54 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/03 12:24:37 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		a;
	size_t		b;

	a = 0;
	b = 0;
	if (needle[b] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[b])
		{
			while (haystack[a + b] == needle[b] && (a + b) < len)
			{
				b++;
				if (needle[b] == '\0')
					return ((char*)haystack + a);
			}
		}
		b = 0;
		a++;
	}
	return (0);
}
