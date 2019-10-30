/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:53:44 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:16:43 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_size(int n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*number;

	i = 0;
	if (n < 0)
		i = 1;
	size = ft_number_size(n);
	if (!(number = (char *)malloc(sizeof(char) * (size + i + 1))))
		return (NULL);
	number[size + i] = 0;
	if (n < 0)
		number[0] = 45;
	while (size)
	{
		size--;
		number[size + i] = (i ? -(n % 10) : (n % 10)) + '0';
		n = n / 10;
	}
	return (number);
}
