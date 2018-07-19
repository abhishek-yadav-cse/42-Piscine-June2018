/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:03:26 by ayadav            #+#    #+#             */
/*   Updated: 2018/06/27 19:39:44 by ayadav           ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(int size, char **argv)
{
	int i;

	i = 1;
	while (size != 1)
	{
		ft_putstr(argv[i]);
		size--;
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	i = 1;
	j = 1;
	size = argc;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(size, argv);
	return (0);
}
