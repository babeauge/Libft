/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:44:11 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/06 12:19:34 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char		*cpy;
	size_t		len;
	size_t		i;

	i = -1;
	len = ft_strlen(s1);
	if (!(cpy = (char *)malloc(len + 1)))
		return (NULL);
	while (s1[++i] != '\0')
		cpy[i] = s1[i];
	cpy[i] = '\0';
	return (cpy);
}
