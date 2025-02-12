/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_to_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:35:42 by daniel-cast       #+#    #+#             */
/*   Updated: 2025/02/07 17:04:05 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*int_cpy_to_lst(int *num, int size, t_pile *sts)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = sts->a;
	while (i < size)
	{
		sts->a->content = num[i];
		i++;
		sts->a = sts->a->next;
	}
	sts->a = temp;
	return (sts);
}
