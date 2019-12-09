/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:24:09 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/05 18:22:59 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(s3 = (char*)malloc(len + 1)))
		return (NULL);
	while (s1[++i] != '\0')
		s3[i] = s1[i];
	while (s2[++j] != '\0')
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
