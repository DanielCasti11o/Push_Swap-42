/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:53:16 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/10 19:16:34 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_ord(t_pile *sts)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = sts->a;
	if (sts->a->index != i)
		return (0);
	while (sts->a != NULL)
	{
		if (sts->a->index != i)
		{
			sts->a = temp;
			return (0);
		}
		else if (sts->a->index == i)
		{
			i++;
			sts->a = sts->a->next;
		}
	}
	sts->a = temp;
	return (1);
}

void	ft_sort(t_pile *sts, int flag)
{
	if (!check_ord(sts))
	{
		if (sts->ia == 2)
			sa(sts);
		else if (sts->ia == 3)
			s_three(sts, flag);
		else if (sts->ia == 4)
			s_four(sts, flag);
		else if (sts->ia == 5)
			s_five(sts, flag);
		else if (sts->ia == 6)
			s_six(sts, flag);
		else if (sts->ia > 6)
			ft_ksort(sts, flag);
	}
}
