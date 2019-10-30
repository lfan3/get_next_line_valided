/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 18:06:49 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:49:51 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srcc;
	size_t			i;

	i = 0;
	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc < dest)
		while ((int)(--n) >= 0)
			*(dest + n) = *(srcc + n);
	else
		while (i < n)
		{
			*(dest + i) = *(srcc + i);
			i++;
		}
	return (dest);
}
