/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:48:46 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/21 23:16:17 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char numbers[3];

	numbers[0] = '0';
	while (numbers[0] <= '9')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '9')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				ft_putchar(numbers[0]);
				ft_putchar(numbers[1]);
				ft_putchar(numbers[2]);
				if (numbers[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
