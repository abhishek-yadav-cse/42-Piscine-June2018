/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:43:48 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/26 22:52:53 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (str[i - 1] == ' ' && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else
		{
			if (str[i] >= 97 && str[i] <= 122)
				i++;
		}
	}
	return (str);
}
