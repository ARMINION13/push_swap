/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:21:09 by rgirondo          #+#    #+#             */
/*   Updated: 2021/11/02 18:42:59 by rgirondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

int	main(int argc, char **argv)
{
	char	*str;

    str = 0;
	argv = 0;
	if (argc > 1)
	{
		while (get_next_line(STDIN_FILENO, &str) > 0)
		{
			ft_printf("a\n");
		}
	}
	ft_printf("%s\n", str[0]);
	return (0);
}
