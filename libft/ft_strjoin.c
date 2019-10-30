/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 14:17:30 by linfan            #+#    #+#             */
/*   Updated: 2019/05/07 21:32:18 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	int		k;

	k = -1;
	if (s1 != NULL && s2 != NULL)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		if (!(str = (char *)malloc(sizeof(char) * (i + j + 1))))
			return (NULL);
		if (i == 0 && j == 0)
			str[k + 1] = '\0';
		while (++k < i)
			str[k] = s1[k];
		while (k >= i && k < i + j)
		{
			str[k] = s2[k - i];
			k++;
		}
		str[k] = '\0';
		return (str);
	}
	return (NULL);
}
