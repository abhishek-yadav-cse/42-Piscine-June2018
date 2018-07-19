/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 21:58:00 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/23 21:58:04 by ayadav           ###   ########.fr       */
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
