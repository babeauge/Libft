/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 00:21:59 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/04 10:59:28 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				x;
	unsigned char		*d;
	unsigned char		*s;

	x = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dst);
}
