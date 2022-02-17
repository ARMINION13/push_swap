/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:19:12 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:24:24 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	simple_sort(t_stack *a, t_stack *b)
{
	if (a->len == 3)
		sort_3(a);
	if (a->len == 5)
		sort_5(a, b);
}

void	sort_3(t_stack *a)
{
	int	i;

	i = a->top;
	if (a->stk[i] > a->stk[i + 1] && a->stk[i] < a->stk[i + 2])
		ft_printf("%s", sa(a));
	if (a->stk[i] > a->stk[i + 1] && a->stk[i] > a->stk[i + 2])
	{
		if (a->stk[i + 1] > a->stk[i + 2])
			ft_printf("%s%s", sa(a), rra(a));
		else
			ft_printf("%s", ra(a));
	}
	if (a->stk[i] < a->stk[i + 1] && a->stk[i + 1] > a->stk[i + 2])
	{
		if (a->stk[i] < a->stk[i + 2])
			ft_printf("%s%s", sa(a), ra(a));
		else
			ft_printf("%s", rra(a));
	}
}

void	sort_5(t_stack *a, t_stack *b)
{
	ft_printf("%s%s", pb(a, b), pb(a, b));
	sort_3(a);
	smart_rotate(a, b->stk[b->top]);
	ft_printf("%s", pa(a, b));
	smart_rotate(a, b->stk[b->top]);
	ft_printf("%s", pa(a, b));
	smart_rotate(a, 0);
}
