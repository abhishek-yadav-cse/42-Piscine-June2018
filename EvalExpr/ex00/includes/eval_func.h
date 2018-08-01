/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadav <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:28:36 by ayadav            #+#    #+#             */
/*   Updated: 2018/07/08 21:28:39 by ayadav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_FUNC_H
# define EVAL_FUNC_H

# include <stdlib.h>

typedef	int	(*t_func)(int x, int y);

int			ft_add(int x, int y);
int			ft_div(int x, int y);
int			ft_mod(int x, int y);
int			ft_mul(int x, int y);
int			ft_sub(int x, int y);

# define OPERATORS "+-/*%"

int			eval_expr(char *str);

int			is_digit(char c);

void		ft_putchar(char c);
void		ft_putnbr(int nb);
char		*ft_strncpy(char *src, unsigned int n);
char		*ft_itoa(int nbr);
int			ft_atoi(char *str);
int			ft_strlen(char *str);

t_func		get_operator(char op);
int			priority(char op);
void		evaluate(void);
int			get_num_length(char *str);
int			push_num(char *str);
void		fill_stacks(char *str);
void		eval_stacks(void);

#endif
