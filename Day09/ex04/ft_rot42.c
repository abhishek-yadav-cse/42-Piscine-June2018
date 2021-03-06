/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:05:02 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/29 16:15:32 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = (((*str - 'a' + 42) % 26) + 'a');
		if ('A' <= *str && *str <= 'Z')
			*str = (((*str - 'A' + 42) % 26) + 'A');
	}
	return (str);
}
