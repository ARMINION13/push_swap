/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:31:48 by rgirondo          #+#    #+#             */
/*   Updated: 2021/11/02 18:10:29 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stk_a;
	t_stack	*stk_b;

	if (argc > 1)
	{
		stk_a = (t_stack *)malloc(sizeof(t_stack));
		stk_b = (t_stack *)malloc(sizeof(t_stack));
		ft_initialize_stack(argv, stk_a, stk_b);
		if (stk_a->len < 1 || stk_sorted(stk_a) == 0)
		{
			free_t_stack(stk_a, stk_b);
			return (0);
		}
		ft_duplicate(stk_a, stk_b);
		ft_simplify(stk_a, argv);
		if (stk_a->len == 3 || stk_a->len == 5)
			simple_sort(stk_a, stk_b);
		else if (stk_a->len >= 1)
			radix_sort(stk_a, stk_b);
		free_t_stack(stk_a, stk_b);
	}
	return (0);
}
