/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:48:58 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/30 18:52:19 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_simplify(t_stack *a, char **argv)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		i;
	int		j;

	tmp_a = (t_stack *)malloc(sizeof(t_stack));
	tmp_b = (t_stack *)malloc(sizeof(t_stack));
	i = 0;
	j = 0;
	ft_initialize_stack(argv, tmp_a, tmp_b);
	ft_sort(tmp_a);
	while (i != a->len)
	{
		if (a->stk[i] == tmp_a->stk[j])
		{
			a->stk[i] = j;
			j = 0;
			i++;
		}
		else
			j++;
	}
	free_t_stack(tmp_a, tmp_b);
}

void	ft_sort(t_stack *tmp_a)
{
	int	i;
	int	tmp;

	tmp = 0;
	i = 0;
	while (stk_sorted(tmp_a) != 0)
	{
		tmp = tmp_a->stk[i];
		if (tmp_a->stk[i] > tmp_a->stk[i + 1])
		{
			tmp_a->stk[i] = tmp_a->stk[i + 1];
			tmp_a->stk[i + 1] = tmp;
		}
		i++;
		if (i == (tmp_a->len - 1))
			i = 0;
	}
}
