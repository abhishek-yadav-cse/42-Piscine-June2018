/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 22:15:19 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/23 22:15:22 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int count;

	count = 0;
	i = 2;
	if (nb == 2)
		return (1);
	else if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
				count++;
			i++;
		}
	}
	if (count != 0)
		return (0);
	else
		return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb <= 2)
	{
		return (2);
	}
	else if (nb > 2)
	{
		while (i < 2 * nb)
		{
			if (ft_is_prime(i))
				return (i);
			i++;
		}
	}
}
