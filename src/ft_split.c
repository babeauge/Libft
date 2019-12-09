/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:24:40 by babeauge          #+#    #+#             */
/*   Updated: 2019/12/06 12:23:08 by babeauge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		word_count(char const *s, char c)
{
	int		i;
	int		total;

	i = 0;
	total = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			total++;
		i++;
	}
	return (total);
}

static char		*set_words(char const *s, char c, int *i)
{
	int		start;
	int		len;
	char	*mot;

	len = 0;
	while (s[*i] == c)
		*i = *i + 1;
	start = *i;
	while (s[*i] != c)
		*i = *i + 1;
	if (!(mot = malloc(sizeof(*mot) * (*i + 1))))
		return (NULL);
	while (start + len < *i)
	{
		mot[len] = s[start + len];
		len++;
	}
	mot[len] = '\0';
	return (mot);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**final;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	words = word_count(s, c);
	if (!(final = malloc(sizeof(final) * (words + 1))))
		return (NULL);
	while (j < words)
	{
		final[j] = set_words(s, c, &i);
		j++;
	}
	final[j] = 0;
	return (final);
}
