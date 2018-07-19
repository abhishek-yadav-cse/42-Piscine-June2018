/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 20:56:15 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/23 20:57:23 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb < 0 || nb >= 13)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
