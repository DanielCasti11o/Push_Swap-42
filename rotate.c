/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:16:26 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/10 19:23:08 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_pile *sts, int flag)
{
	t_list	*first;
	t_list	*last;

	if (!sts || !sts->a || !sts->a->next || sts->ia < 2)
		return ;
	first = sts->a;
	last = ft_lstlast(sts->a);
	sts->a = sts->a->next;
	last->next = first;
	first->next = NULL;
	if (flag == 0)
		write (1, "ra\n", 3);
}

void	rb(t_pile *sts, int flag)
{
	t_list	*first;
	t_list	*last;

	if (!sts || !sts->b || !sts->b->next || sts->ib < 2)
		return ;
	first = sts->b;
	last = ft_lstlast(sts->b);
	sts->b = sts->b->next;
	last->next = first;
	first->next = NULL;
	if (flag == 0)
		write (1, "rb\n", 3);
}

void	rr(t_pile *sts, int flag)
{
	flag = 1;
	ra(sts, flag);
	rb(sts, flag);
	write (1, "rr\n", 3);
	flag = 0;
}
