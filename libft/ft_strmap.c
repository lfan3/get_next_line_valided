/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 12:11:06 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 16:19:10 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*ch;

	i = 0;
	j = 0;
	if (s != NULL)
	{
		while (s[i])
			i++;
		ch = (char *)malloc(sizeof(char) * (i + 1));
		if (ch == NULL)
			return (NULL);
		ch[i] = 0;
		while (i - 1 >= 0)
		{
			ch[i - 1] = f(s[i - 1]);
			i--;
		}
		return (ch);
	}
	return (NULL);
}
