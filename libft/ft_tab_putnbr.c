/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:52:52 by linfan            #+#    #+#             */
/*   Updated: 2019/05/15 11:30:55 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tab_putnbr(int **tab, int b_len, int s_len)
{
	int i;
	int j;

	i = 0;
	while (i < b_len)
	{
		j = 0;
		while (j < s_len)
		{
			ft_putnbr(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}