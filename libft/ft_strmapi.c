/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 11:53:49 by linfan            #+#    #+#             */
/*   Updated: 2019/04/28 18:09:46 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			ch[i - 1] = f((i - 1), s[i - 1]);
			i--;
		}
		return (ch);
	}
	return (NULL);
}
