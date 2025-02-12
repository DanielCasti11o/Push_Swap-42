/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:44:37 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/10 19:25:41 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_pile *sts, int flag)
{
	t_list	*first;
	t_list	*last;
	t_list	*bef_last;

	if (!sts || !sts->a || !sts->a->next)
		return ;
	first = sts->a;
	last = ft_lstlast(sts->a);
	bef_last = sts->a;
	while (bef_last->next->next != NULL)
	{
		bef_last = bef_last->next;
	}
	bef_last->next = NULL;
	last->next = first;
	sts->a = last;
	if (flag == 0)
		write (1, "rra\n", 4);
}

void	rrb(t_pile *sts, int flag)
{
	t_list	*first;
	t_list	*last;
	t_list	*bef_last;

	if (!sts || !sts->b || !sts->b->next)
		return ;
	first = sts->b;
	last = ft_lstlast(sts->b);
	bef_last = sts->b;
	while (bef_last->next->next != NULL)
	{
		bef_last = bef_last->next;
	}
	bef_last->next = NULL;
	last->next = first;
	sts->b = last;
	if (flag == 0)
		write (1, "rrb\n", 4);
}

void	rrr(t_pile *sts, int flag)
{
	flag = 1;
	rra(sts, flag);
	rrb(sts, flag);
	write (1, "rrr\n", 4);
	flag = 0;
}
