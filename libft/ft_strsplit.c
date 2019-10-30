/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:05:22 by linfan            #+#    #+#             */
/*   Updated: 2019/05/08 12:02:06 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_the_words(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c && *s != 0)
			s++;
		i++;
	}
	return (i);
}

static	char	*ft_get_first_word(char const *s, char c)
{
	int		j;
	int		i;
	char	*str;

	j = 0;
	i = 0;
	while (s[j] != c && s[j] != 0)
		j++;
	if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int			j;
	char		**ptr;

	if (s != NULL)
	{
		j = count_the_words(s, c);
		if (!(ptr = (char **)malloc(sizeof(char *) * (j + 1))))
			return (NULL);
		j = 0;
		while (*s)
		{
			while (*s == c)
				s++;
			if (*s != c && *s != 0)
			{
				ptr[j] = ft_get_first_word(s, c);
				j++;
				while (*s != c && *s != 0)
					s++;
			}
		}
		ptr[j] = 0;
		return (ptr);
	}
	return (NULL);
}
