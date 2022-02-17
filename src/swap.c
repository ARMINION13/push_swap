/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:26:34 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:16:58 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*sa(t_stack *a)
{
	int	s;

	s = a->stk[a->top];
	a->stk[a->top] = a->stk[a->top + 1];
	a->stk[a->top + 1] = s;
	return ("sa\n");
}

char	*sb(t_stack *b)
{
	int	s;

	s = b->stk[b->top];
	b->stk[b->top] = b->stk[b->top + 1];
	b->stk[b->top + 1] = s;
	return ("sb\n");
}

char	*ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	return ("ss\n");
}
