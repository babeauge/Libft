/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 01:06:30 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/06 12:21:55 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char		*s;
	unsigned char			*d;
	const unsigned char		*s2;
	unsigned char			*d2;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (d < s)
		while (len-- > 0)
			*d++ = *s++;
	else
	{
		s2 = s + (len - 1);
		d2 = d + (len - 1);
		while (len-- > 0)
			*d2-- = *s2--;
	}
	return (dst);
}
