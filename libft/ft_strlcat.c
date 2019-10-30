/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:53:31 by linfan            #+#    #+#             */
/*   Updated: 2019/04/23 21:19:24 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			k;
	unsigned char	*dstn;
	unsigned char	*srcn;

	dstn = (unsigned char *)dst;
	srcn = (unsigned char *)src;
	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (size <= j)
		return (k + size);
	while (i + j < size - 1 && i < k)
	{
		dstn[j + i] = srcn[i];
		i++;
	}
	dstn[j + i] = 0;
	return (j + k);
}
