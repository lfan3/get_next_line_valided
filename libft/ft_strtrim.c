/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 15:00:29 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:48:40 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_head(char const *s, int i)
{
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static int	ft_end(char const *s, int j)
{
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == ',' || s[j] == '\n' || s[j] == '\t')
		j--;
	return (j);
}

char		*ft_strtrim(char	const *s)
{
	int		i;
	int		j;
	int		k;
	char	*dst;

	k = 0;
	if (s != NULL)
	{
		i = ft_head(s, 0);
		j = ft_end(s, 0);
		if (j >= i && !(dst = ft_strnew(j - i + 1)))
			return (NULL);
		if (j == -1 && (!(dst = ft_strnew(1))))
			return (NULL);
		while (i <= j)
		{
			dst[k] = s[i];
			k++;
			i++;
		}
		dst[k] = 0;
		return (dst);
	}
	return (NULL);
}
