/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:27:03 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/29 20:37:05 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_duplicate(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j != a->len)
	{
		i = 0;
		while (i != a->len)
		{
			if (a->stk[j] == a->stk[i] && i != j)
			{
				write(STDERR_FILENO, "Error\n", 6);
				free_t_stack(a, b);
				exit(EXIT_FAILURE);
			}
			i++;
		}
		j++;
	}
}

void	min_max_int(t_stack *a, t_stack *b, char *str, char *limit)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = str;
	if (tmp[0] == '+' || tmp[0] == '-')
		tmp++;
	if (str[0] == '-')
		limit = "2147483648";
	if (ft_strlen(tmp) >= ft_strlen(limit))
	{
		while (tmp[i])
		{
			if (tmp[i] > limit[i] || ft_strlen(tmp) > ft_strlen(limit))
			{
				write(STDERR_FILENO, "Error\n", 6);
				free_t_stack(a, b);
				exit(EXIT_FAILURE);
			}
			else if (tmp[i] < limit[i])
				return ;
			i++;
		}
	}
}
