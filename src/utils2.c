/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:07:34 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/30 19:19:29 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*ft_join_malloc(char *join, char *str)
{
	char	*tmp;

	tmp = ft_strjoin(join, str);
	free(join);
	return (tmp);
}

void	free_t_stack(t_stack *a, t_stack *b)
{
	free(a->stk);
	free(a);
	free(b->stk);
	free(b);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i] != 0)
		free(split[i++]);
	free(split);
}
