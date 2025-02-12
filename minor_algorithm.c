/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minor_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:46:33 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/02/10 19:23:49 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_three(t_pile *stacks, int flag)
{
	int	ix_0;
	int	ix_1;
	int	ix_2;

	ix_0 = stacks->a->index;
	ix_1 = stacks->a->next->index;
	ix_2 = stacks->a->next->next->index;
	if (ix_0 < ix_1 && ix_1 < ix_2)
		return ;
	else if (ix_0 > ix_1 && ix_1 > ix_2)
	{
		ra(stacks, flag);
		sa(stacks);
	}
	else if (ix_0 > ix_1 && ix_2 > ix_1 && ix_2 < ix_0)
		ra(stacks, flag);
	else if (ix_0 < ix_1 && ix_0 > ix_2)
		rra(stacks, flag);
	else if (ix_0 > ix_1 && ix_0 < ix_2)
		sa(stacks);
	else if (ix_0 < ix_1 && ix_0 < ix_2 && ix_1 > ix_2)
	{
		sa(stacks);
		ra(stacks, flag);
	}
}

void	reverse_s_three(t_pile *stacks, int flag)
{
	int	ix_0;
	int	ix_1;
	int	ix_2;

	ix_0 = stacks->b->index;
	ix_1 = stacks->b->next->index;
	ix_2 = stacks->b->next->next->index;
	if (ix_0 > ix_1 && ix_1 > ix_2)
		return ;
	else if (ix_0 < ix_1 && ix_1 < ix_2)
	{
		rb(stacks, flag);
		sb(stacks);
	}
	else if (ix_0 < ix_1 && ix_2 < ix_1 && ix_2 > ix_0)
		rb(stacks, flag);
	else if (ix_0 > ix_1 && ix_0 < ix_2)
		rrb(stacks, flag);
	else if (ix_0 < ix_1 && ix_0 > ix_2)
		sb(stacks);
	else if (ix_0 > ix_1 && ix_0 > ix_2)
	{
		sb(stacks);
		rb(stacks, flag);
	}
}

void	s_four(t_pile *stacks, int flag)
{
	int	i;

	i = 0;
	while (i < 1)
	{
		if ((stacks->a->index) == 0)
		{
			pb(stacks);
			i++;
		}
		else
			ra(stacks, flag);
	}
	s_three(stacks, flag);
	pa(stacks);
}

void	s_five(t_pile *stacks, int flag)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((stacks->a->index) == 0 || (stacks->a->index) == 1)
		{
			pb(stacks);
			i++;
		}
		else
			ra(stacks, flag);
	}
	s_three(stacks, flag);
	if (stacks->b && stacks->b->next
		&& (stacks->b->index) < (stacks->b->next->index))
		sb(stacks);
	pa(stacks);
	pa(stacks);
}

void	s_six(t_pile *stacks, int flag)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if ((stacks->a->index) == 0 || (stacks->a->index) == 1
			|| (stacks->a->index) == 2)
		{
			pb(stacks);
			i++;
		}
		else
			ra(stacks, flag);
	}
	s_three(stacks, flag);
	reverse_s_three(stacks, flag);
	pa(stacks);
	pa(stacks);
	pa(stacks);
}
