/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:23:54 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:24:55 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	smart_rotate(t_stack *a, int b)
{
	int	above;
	int	i;

	i = a->top;
	above = find_above(a, b);
	if (above == b)
		above = min(a);
	while (i < (a->len - 1) && a->stk[i] != above && a->stk[i] != b)
		i++;
	if (i == a->top || i == a->len)
		return ;
	else if ((i - a->top) <= ((a->len - a->top) / 2))
	{
		while ((i--) > a->top)
			ft_printf("%s", ra(a));
	}
	else
	{
		i = ((a->len) - i);
		while ((i--) > 0)
			ft_printf("%s", rra(a));
	}
}

int	find_above(t_stack *a, int b)
{
	int	i;
	int	j;

	if (b > max(a) || b == -1 || a->top == 0)
		return (b);
	j = max(a);
	i = a->top;
	while (i != a->len)
	{
		if (a->stk[i] > b && a->stk[i] < j)
			j = a->stk[i];
		i++;
	}
	return (j);
}

int	max(t_stack *a)
{
	int	i;
	int	m;

	i = a->top;
	m = a->stk[i];
	while (i != a->len)
	{
		if (a->stk[i] > m)
			m = a->stk[i];
		i++;
	}
	return (m);
}

int	min(t_stack *a)
{
	int	i;
	int	m;

	i = a->top;
	m = a->stk[i];
	while (i != a->len)
	{
		if (a->stk[i] < m)
			m = a->stk[i];
		i++;
	}
	return (m);
}
