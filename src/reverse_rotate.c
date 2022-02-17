/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:24:12 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:28:23 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*rra(t_stack *a)
{
	int	i;
	int	t;
	int	s;

	s = 0;
	i = a->len - 1;
	t = (a->len - 1);
	while (i != a->top)
	{
		s = a->stk[t];
		a->stk[t] = a->stk[t - 1];
		a->stk[t - 1] = s;
		t--;
		i--;
	}
	return ("rra\n");
}

char	*rrb(t_stack *b)
{
	int	i;
	int	t;
	int	s;

	s = 0;
	i = b->len - 1;
	t = (b->len - 1);
	while (i != b->top)
	{
		s = b->stk[t];
		b->stk[t] = b->stk[t - 1];
		b->stk[t - 1] = s;
		t--;
		i--;
	}
	return ("rra\n");
}

char	*rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	return ("rrr\n");
}
