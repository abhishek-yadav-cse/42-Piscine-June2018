/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlubos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 19:33:10 by jlubos            #+#    #+#             */
/*   Updated: 2018/06/24 15:02:10 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	first_line(int col)
{
	int i;

	i = 1;
	ft_putchar('A');
	i++;
	while (i > 1 && i < col)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	middle(int col)
{
	int i;

	i = 1;
	ft_putchar('B');
	i++;
	while (i > 1 && i < col)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	last_line(int col)
{
	int i;

	i = 1;
	ft_putchar('C');
	i++;
	while (i > 1 && i < col)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
}

void	rush02(int col, int row)
{
	int i;
	int j;

	j = 1;
	if (j == 1)
	{
		first_line(col);
		j++;
	}
	while (j > 1 && j < row)
	{
		middle(col);
		j++;
	}
	if (j == row)
	{
		last_line(col);
	}
	ft_putchar('\n');
}
