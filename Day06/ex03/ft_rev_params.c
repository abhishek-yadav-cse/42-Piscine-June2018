/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:01:58 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/27 19:33:49 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc != 1)
	{
		ft_putstr(argv[argc - 1]);
		argc--;
		ft_putchar('\n');
	}
	return (0);
}
