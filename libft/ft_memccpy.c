/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:21:03 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:17:53 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstn;
	unsigned char	*srcn;

	i = 0;
	dstn = (unsigned char *)dst;
	srcn = (unsigned char *)src;
	while (i < n)
	{
		dstn[i] = srcn[i];
		if (srcn[i] == (unsigned char)c)
			return (dstn + i + 1);
		i++;
	}
	return (NULL);
}
