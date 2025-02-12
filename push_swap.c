/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 00:29:51 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/02/10 19:15:03 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	*stacks;
	int		*num;
	int		c;
	int		flag;

	flag = 0;
	if (argc > 1)
	{
		c = count_elem(argv, ' ');
		stacks = init_pile(c);
		if (!stacks)
			ft_lstclear(stacks);
		num = (int *)malloc((c + 1) * sizeof(int));
		if (!num)
			return (free(num), ft_lstclear(stacks), 0);
		num = ft_pars(argc, argv, c, num);
		stacks = int_cpy_to_lst(num, c, stacks);
		free(num);
		assig_index(stacks);
		ft_sort(stacks, flag);
		ft_lstclear(stacks);
	}
	return (0);
}
