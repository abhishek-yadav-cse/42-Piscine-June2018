/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 11:02:35 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/21 23:21:50 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c != 123)
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}