/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 02:26:38 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/04 10:54:40 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	i = 0;
	src = s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (unsigned char*)(src + i);
		i++;
	}
	return (0);
}
