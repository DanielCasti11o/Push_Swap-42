/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:58:54 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/09 20:31:49 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_lst(int size, t_pile *piles)
{
	t_list	*stack;
	t_list	*temp;
	t_list	*new;
	int		i;

	i = 1;
	stack = (t_list *)malloc(sizeof(t_list));
	if (!stack)
		return (ft_lstclear(piles), NULL);
	stack->content = 0;
	stack->index = -1;
	temp = stack;
	while (i < size)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return (ft_mini_lstclear(temp), NULL);
		new->content = 0;
		new->index = -1;
		stack->next = new;
		stack = new;
		i++;
	}
	stack->next = NULL;
	return (temp);
}

t_pile	*init_pile(int size_a)
{
	t_pile	*new;

	new = (t_pile *)malloc(sizeof(t_pile));
	if (!new)
		return (NULL);
	new->a = init_lst(size_a, new);
	if (!new->a)
	{
		ft_lstclear(new);
		return (NULL);
	}
	new->b = NULL;
	new->ia = size_a;
	new->ib = 0;
	return (new);
}
