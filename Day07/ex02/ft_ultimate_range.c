/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 21:06:06 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/28 21:06:10 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
