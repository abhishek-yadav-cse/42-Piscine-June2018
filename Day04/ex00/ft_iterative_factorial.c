/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 20:37:47 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/23 20:37:53 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	i = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	else
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
}
