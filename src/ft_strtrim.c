/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:24:21 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/06 12:26:09 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		check(char c, const char *set)
{
	int		j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	start;
	size_t			len;

	i = 0;
	if (!s1)
		return (0);
	while (check(s1[i], set) == 1)
		i++;
	start = i;
	while (s1[i + 1] != '\0')
		i++;
	while (check(s1[i], set) == 1)
		i--;
	len = i - start + 1;
	return (ft_substr(s1, start, len));
}
