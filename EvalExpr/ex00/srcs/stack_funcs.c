/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:28:14 by ayadav            #+#    #+#             */
/*   Updated: 2018/07/08 21:28:18 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_init(t_stack *stack, int size)
{
	stack->top = -1;
	stack->data = malloc(sizeof(char *) * size);
}

void	push_stack(t_stack *stack, char *str)
{
	stack->data[++(stack->top)] = str;
}

char	*get_top(t_stack *stack)
{
	if (stack->top >= 0)
		return (stack->data[stack->top]);
	return (0);
}

char	*pop_top(t_stack *stack)
{
	if (stack->top != -1)
		return (stack->data[stack->top--]);
	return (0);
}

void	free_stack(t_stack *stack)
{
	if (stack->data)
		free(stack->data);
}
