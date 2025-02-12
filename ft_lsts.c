/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:42:59 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/09 20:53:55 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_lstclear(t_pile *stacks)
{
	t_list	*temp;

	if (!stacks)
		return ;
	while (stacks->a != NULL)
	{
		temp = stacks->a->next;
		free(stacks->a);
		stacks->a = temp;
	}
	while (stacks->b != NULL)
	{
		temp = stacks->b->next;
		free(stacks->b);
		stacks->b = temp;
	}
	free(stacks);
}

void	ft_mini_lstclear(t_list *stk)
{
	t_list	*temp;

	if (!stk)
		return ;
	while (stk != NULL)
	{
		temp = stk->next;
		free(stk);
		stk = temp;
	}
}
