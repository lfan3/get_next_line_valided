/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:24:36 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 16:21:32 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	j = 0;
	dst = (char *)haystack;
	while (needle[i])
		i++;
	if (i == 0)
		return (dst);
	i = 0;
	while (dst[i])
	{
		if (dst[i] == needle[j])
		{
			while (dst[i + j] == needle[j] && needle[j] != 0)
				j++;
			if (needle[j] == 0)
				return (dst + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
