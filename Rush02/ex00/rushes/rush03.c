/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:19:25 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 21:27:25 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rushes.h"

void	rush(int x, int y)
{
	int w;
	int h;

	w = x;
	h = y;
	y = 1;
	while (y <= h)
	{
		x = 1;
		while (x <= w)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == h))
				ft_putchar('A');
			else if (x > 1 && x < w && y > 1 && y < h)
				ft_putchar(' ');
			else if ((x == w && y == 1) || (x == w && y == h))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
