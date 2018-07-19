/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 21:11:57 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/23 21:12:01 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int result;

	result = 1;
	if (index <= 1)
	{
		return (index);
	}
	else if (index < 0)
	{
		return (-1);
	}
	else
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);
	}
}
