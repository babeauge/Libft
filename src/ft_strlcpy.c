/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:43:30 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/04 14:26:32 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	srcsize = ft_strlen(src);
	if (srcsize + 1 < dstsize)
		while (i < srcsize + 1)
		{
			dst[i] = src[i];
			i++;
		}
	else if (dstsize != 0)
	{
		while (i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[dstsize - 1] = '\0';
	}
	return (srcsize);
}
