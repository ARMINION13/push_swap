/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:57:16 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:27:23 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*ra(t_stack *a)
{
	int	i;
	int	t;
	int	s;

	s = 0;
	i = a->len - 1;
	t = a->top;
	while (i != a->top)
	{
		s = a->stk[t];
		a->stk[t] = a->stk[t + 1];
		a->stk[t + 1] = s;
		t++;
		i--;
	}
	return ("ra\n");
}

char	*rb(t_stack *b)
{
	int	i;
	int	t;
	int	s;

	s = 0;
	i = b->len - 1;
	t = b->top;
	while (i != b->top)
	{
		s = b->stk[t];
		b->stk[t] = b->stk[t + 1];
		b->stk[t + 1] = s;
		t++;
		i--;
	}
	return ("rb\n");
}

char	*rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	return ("rr\n");
}
