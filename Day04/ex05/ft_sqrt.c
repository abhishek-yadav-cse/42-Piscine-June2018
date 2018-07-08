/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 21:13:22 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/23 21:13:35 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int mid;
	int i;

	mid = nb / 2;
	if (nb == 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		i = 2;
		while (i <= mid)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
}
