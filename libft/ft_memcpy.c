/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:37:10 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:59:17 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstn;
	const char	*srcn;
	size_t		i;

	dstn = dst;
	srcn = src;
	i = 0;
	while (i < n)
	{
		dstn[i] = srcn[i];
		i++;
	}
	return (dstn);
}
