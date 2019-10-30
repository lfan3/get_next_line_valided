/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:54:33 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:14:08 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int				putnbr(char c)
{
	int					nb;

	nb = c - '0';
	return (nb);
}

static int				ft_signe(const char *str)
{
	int					i;
	int					neg;

	i = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' && (str[i + 1] > 47 && str[i + 1] < 58)
				&& (str[i + 1] != '\0'))
		{
			neg = -1;
		}
		i++;
	}
	return (i * neg);
}

static int				ft_if_is_neg(int i, const char *str)
{
	unsigned long long	k;

	k = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		k = putnbr(str[i]) + 10 * k;
		if (k > 9223372036854775807)
			return (0);
		i++;
	}
	return (1);
}

static int				ft_make_number(int i, int j, const char *str, int neg)
{
	unsigned long long	k;
	int					t;

	k = 0;
	t = -1;
	if (str[i] <= 47 || str[i] > 57)
		return (0);
	if (neg == -1 && t == -1)
		t = ft_if_is_neg(i, str);
	if (neg == 1 || t == 1)
	{
		while (str[i] > 47 && str[i] < 58)
		{
			j = putnbr(str[i]) + 10 * j;
			k = putnbr(str[i]) + 10 * k;
			if (k > 9223372036854775807)
				return (-1);
			i++;
		}
	}
	return ((int)neg * j);
}

int						ft_atoi(const char *str)
{
	int					i;
	long				j;
	unsigned long long	k;
	int					neg;

	j = 0;
	k = 0;
	i = ft_signe(str);
	if (i < 0)
	{
		neg = -1;
		i = -i;
	}
	else
	{
		neg = 1;
	}
	j = ft_make_number(i, j, str, neg);
	return (j);
}
