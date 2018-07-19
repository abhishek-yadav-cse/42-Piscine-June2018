/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:08:12 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/29 16:08:18 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_xm(int hour)
{
	return ((hour >= 12 && hour <= 23) ? "P.M." : "A.M.");
}

void	ft_takes_place(int hour)
{
	if (hour < 0 || hour > 23)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", (hour % 12 == 0) ? 12 : (hour % 12));
	printf(".00 %s", ft_xm(hour));
	hour++;
	printf(" AND %d", (hour % 12 == 0) ? 12 : (hour % 12));
	printf(".00 %s\n", ft_xm(hour));
}
