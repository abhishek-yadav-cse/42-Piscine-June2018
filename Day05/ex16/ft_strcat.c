/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 22:13:38 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/26 22:18:02 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int i;

	index = 0;
	i = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	if (src[0] == '\0')
		return (dest);
	else
		while (src[i] != '\0')
		{
			dest[index] = src[i];
			index++;
			i++;
		}
	dest[index + 1] = '\0';
	return (dest);
}
