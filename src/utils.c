/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:13:31 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/30 18:55:22 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_initialize_stack(char **argv, t_stack *a, t_stack *b)
{
	char	**matrix;
	int		i;

	i = 0;
	matrix = ft_stack(argv + 1);
	while (matrix[i])
		i++;
	a->len = i;
	a->top = 0;
	a->stk = (int *)malloc(sizeof(int) * a->len);
	b->len = a->len;
	b->top = a->len;
	b->stk = (int *)malloc(sizeof(int) * b->len);
	i = 0;
	while (matrix[i])
	{
		ft_isnbr(matrix[i]);
		min_max_int(a, b, matrix[i], "2147483647");
		a->stk[i] = ft_atoi(matrix[i]);
		i++;
	}
	free_split(matrix);
}

char	**ft_stack(char **argv)
{
	int		i;
	char	*str;
	char	**split;

	i = 0;
	if (argv[i])
	{
		str = ft_strdup(argv[i++]);
		str = ft_join_malloc(str, " ");
	}
	while (argv[i])
	{
		str = ft_join_malloc(str, argv[i++]);
		str = ft_join_malloc(str, " ");
	}
	split = ft_split(str, ' ');
	free(str);
	return (split);
}

void	ft_isnbr(char *str)
{
	int	a;

	a = 0;
	if (ft_strchr("-+", str[0]) && str[1] != '\0')
		a++;
	else if (!(ft_strchr("0123456789", str[0])))
	{
		write(STDERR_FILENO, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	while (str[a])
	{
		if (!(ft_strchr("0123456789", str[a])))
		{
			write(STDERR_FILENO, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		a++;
	}
}

int	stk_sorted(t_stack *a)
{
	int	i;

	i = a->len - 1;
	while (i > 0)
	{
		if (!(a->stk[i] >= a->stk[i - 1]) && a->top == 0)
			return (-1);
		i--;
	}
	return (0);
}
