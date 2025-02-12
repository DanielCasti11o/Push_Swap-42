/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_K_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:19:46 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/10 19:26:51 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_max_in_b(t_pile *stacks)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = stacks->b;
	while (stacks->b && (count < stacks->ib))
	{
		if (stacks->b->index == (stacks->ib - 1))
		{
			stacks->b = temp;
			return (count);
		}
		stacks->b = stacks->b->next;
		count++;
	}
	stacks->b = temp;
	return (count);
}

void	push_to_b(t_pile *stacks, int flag)
{
	int	range;
	int	len;

	len = stacks->ia;
	range = ft_sqrt(stacks->ia) * 1.33;
	while (stacks->a)
	{
		if (len == stacks->ib)
			break ;
		if (stacks->a->index <= stacks->ib)
		{
			pb(stacks);
		}
		else if (stacks->a->index <= stacks->ib + range)
		{
			pb(stacks);
			if (!((stacks->a->index <= stacks->ib + range)))
				rr(stacks, flag);
			else
				rb(stacks, flag);
		}
		else
			ra(stacks, flag);
	}
}

void	return_to_a(t_pile *stacks, int flag)
{
	int	top_rot;
	int	back_rev;
	int	len;

	len = stacks->ib;
	while ((len - 1) >= 0)
	{
		top_rot = index_max_in_b(stacks);
		back_rev = (len + 3) - top_rot;
		if (top_rot <= back_rev)
		{
			while (stacks->b->index != (len - 1))
				rb(stacks, flag);
			pa(stacks);
			len--;
		}
		else
		{
			while (stacks->b->index != (len - 1))
				rrb(stacks, flag);
			pa(stacks);
			len--;
		}
	}
}

void	ft_ksort(t_pile *stacks, int flag)
{
	push_to_b(stacks, flag);
	return_to_a(stacks, flag);
}
