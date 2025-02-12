/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:08 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/10 19:28:18 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_pile *sts)
{
	t_list	*temp;

	if (!sts || !sts->a || !sts->a->next)
		return ;
	temp = sts->a;
	sts->a = sts->a->next;
	temp->next = sts->a->next;
	sts->a->next = temp;
	write (1, "sa\n", 3);
}

void	sb(t_pile *sts)
{
	t_list	*temp;

	if (!sts || !sts->b || !sts->b->next)
		return ;
	temp = sts->b;
	sts->b = sts->b->next;
	temp->next = sts->b->next;
	sts->b->next = temp;
	write (1, "sb\n", 3);
}
