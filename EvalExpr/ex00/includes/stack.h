/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:28:49 by ayadav            #+#    #+#             */
/*   Updated: 2018/07/08 21:28:53 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>

typedef struct	s_stack
{
	char		**data;
	int			top;
}				t_stack;

void			stack_init(t_stack *stack, int size);
void			push_stack(t_stack *stack, char *str);
char			*get_top(t_stack *stack);
char			*pop_top(t_stack *stack);
void			free_stack(t_stack *stack);

#endif
