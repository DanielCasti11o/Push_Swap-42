/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:02:10 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/04 18:27:06 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int num)
{
	int	ref_raiz;

	ref_raiz = 1;
	if (num == 0)
		return (0);
	while (ref_raiz * ref_raiz < num)
	{
		ref_raiz++;
	}
	return (ref_raiz);
}
