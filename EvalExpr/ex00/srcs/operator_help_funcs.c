/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_help_funcs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:27:57 by ayadav            #+#    #+#             */
/*   Updated: 2018/07/08 21:28:00 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "eval_func.h"

t_func	g_f[] = { ft_add, ft_sub, ft_div, ft_mul, ft_mod };

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

t_func	get_operator(char op)
{
	int i;

	i = -1;
	while (++i < 5)
		if (op == OPERATORS[i])
			return (g_f[i]);
	return (0);
}

int		priority(char op)
{
	if (op == '/' || op == '*' || op == '%')
		return (2);
	else if (op == '-' || op == '+')
		return (1);
	else
		return (0);
}

int		get_length(char *str)
{
	int i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}
