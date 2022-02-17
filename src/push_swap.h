/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:28:30 by rgirondo          #+#    #+#             */
/*   Updated: 2021/10/30 19:20:17 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../ft_printf/ft_printf.h"
# include "../gnl/get_next_line.h"
# include "unistd.h"

typedef struct s_stack
{
	int	*stk;
	int	len;
	int	top;
}				t_stack;

char	*pb(t_stack *a, t_stack *b);
char	*pa(t_stack *a, t_stack *b);
char	*rra(t_stack *a);
char	*rrb(t_stack *b);
char	*rrr(t_stack *a, t_stack *b);
char	*ra(t_stack *a);
char	*rb(t_stack *b);
char	*rr(t_stack *a, t_stack *b);
char	*sa(t_stack *a);
char	*sb(t_stack *b);
char	*ss(t_stack *a, t_stack *b);
char	*ft_join_malloc(char *join, char *str);
char	**ft_split(char const *s, char c);
void	ft_initialize_stack(char **argv, t_stack *a, t_stack *b);
char	**ft_stack(char **argv);
void	ft_isnbr(char *str);
int		stk_sorted(t_stack *a);
void	ft_simplify(t_stack *a, char **argv);
void	ft_sort(t_stack *a);
void	radix_sort(t_stack *a, t_stack *b);
void	free_t_stack(t_stack *a, t_stack *b);
void	free_split(char **split);
void	simple_sort(t_stack *a, t_stack *b);
void	sort_3(t_stack *a);
void	smart_rotate(t_stack *a, int b);
void	sort_5(t_stack *a, t_stack *b);
int		find_above(t_stack *a, int b);
int		max(t_stack *a);
int		min(t_stack *a);
void	ft_duplicate(t_stack *a, t_stack *b);
void	min_max_int(t_stack *a, t_stack *b, char *str, char *limit);

#endif
