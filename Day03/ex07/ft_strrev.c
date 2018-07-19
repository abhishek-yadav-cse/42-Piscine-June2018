/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:27:48 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/22 23:27:53 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int length;
	int ph;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	while (i < length - 1)
	{
		ph = str[i];
		str[i] = str[length - 1];
		str[length - 1] = ph;
		length--;
		i++;
	}
	return (str);
}
