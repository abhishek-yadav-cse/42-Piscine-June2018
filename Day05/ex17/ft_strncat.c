/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 22:18:19 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/26 22:38:30 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index;
	int i;

	index = 0;
	i = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	if (nb == 0 || src[0] == '\0')
		return (dest);
	else if (nb >= ft_strlen(src))
	{
		while (src[i] != '\0')
		{
			dest[index] = src[i];
			index++;
			i++;
		}
		dest[index+1] = '\0';
		return (dest);
	}
	else
	{
		while (nb != 0)
		{
			dest[index] = src[i];
			index++;
			i++;
			nb--;
		}
		dest[index+1] = '\0';
		return (dest);
	}
}
