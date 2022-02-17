/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:10:50 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:29:57 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	radix_sort(t_stack *a, t_stack *b)
{
	int	i[3];
	int	max_num;
	int	nbr;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	max_num = a->len - 1;
	while ((max_num >> i[0]) != 0)
		i[0]++;
	while (i[1] < i[0])
	{
		i[2] = 0;
		while (i[2]++ < a->len)
		{
			nbr = a->stk[a->top];
			if (((nbr >> i[1]) & 1) == 1)
				ft_printf("%s", ra(a));
			else
				ft_printf("%s", pb(a, b));
		}
		i[1]++;
		while (a->top != 0)
			ft_printf("%s", pa(a, b));
	}
}
