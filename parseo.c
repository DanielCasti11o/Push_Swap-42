/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:19:11 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/11 20:05:38 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*init(int *numb, int size)
{
	numb = (int *)malloc(size * sizeof(int));
	if (!numb)
		return (free(numb), NULL);
	return (numb);
}

void	fr_words(char **wds)
{
	int	i;

	i = 0;
	while (wds[i])
	{
		free(wds[i]);
		i++;
	}
	free(wds);
}

int	*ft_pars(int argc, char **argv, int c, int *num)
{
	int		i;
	int		j;
	char	**words;

	i = 1;
	c = 0;
	while (i < argc)
	{
		j = 0;
		words = ft_split(argv[i], ' ');
		while (words[j])
		{
			num[c] = checkargs(words[j], num, words);
			j++;
			c++;
		}
		fr_words(words);
		i++;
	}
	num[c] = '\0';
	check_repeat(num, c);
	return (num);
}
