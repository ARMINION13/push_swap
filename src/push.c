/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:58:37 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:33:32 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*pb(t_stack *a, t_stack *b)
{
	if (b->top == 0)
		return (NULL);
	b->stk[--b->top] = a->stk[a->top++];
	return ("pb\n");
}

char	*pa(t_stack *a, t_stack *b)
{
	if (a->top == 0)
		return (NULL);
	a->stk[--a->top] = b->stk[b->top++];
	return ("pa\n");
}
