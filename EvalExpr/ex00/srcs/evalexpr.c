/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:27:12 by ayadav            #+#    #+#             */
/*   Updated: 2018/07/08 21:27:16 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "eval_func.h"

t_stack	g_opstack;
t_stack	g_numstack;

int		num_push(char *str)
{
	int len;

	len = get_length(str);
	push_stack(&g_numstack, ft_strncpy(str, len));
	return (len);
}

void	evaluate(void)
{
	int		op1;
	int		op2;
	char	op;
	t_func	f;

	op2 = ft_atoi(pop_top(&g_numstack));
	op1 = ft_atoi(pop_top(&g_numstack));
	op = *pop_top(&g_opstack);
	f = get_operator(op);
	push_stack(&g_numstack, ft_itoa(f(op1, op2)));
}

void	stack_fill(char *str)
{
	while (*str)
	{
		if (get_length(str))
			str += num_push(str) - 1;
		else if (get_operator(*str))
		{
			while (get_top(&g_opstack)
			&& priority(*str) <= priority(*get_top(&g_opstack)))
				evaluate();
			push_stack(&g_opstack, ft_strncpy(str, 1));
		}
		else if (*str == '(')
			push_stack(&g_opstack, ft_strncpy(str, 1));
		else if (*str == ')')
		{
			while (*get_top(&g_opstack) != '(')
				evaluate();
			pop_top(&g_opstack);
		}
		str++;
	}
}

void	eval_stacks(void)
{
	while (get_top(&g_opstack))
		evaluate();
}

int		eval_expr(char *str)
{
	stack_init(&g_opstack, ft_strlen(str) + 1);
	stack_init(&g_numstack, ft_strlen(str) + 1);
	stack_fill(str);
	eval_stacks();
	return (get_top(&g_numstack)
		? ft_atoi(pop_top(&g_numstack)) : 0);
}
