/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisner <aisner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:05:50 by aisner            #+#    #+#             */
/*   Updated: 2022/03/15 13:22:17 by aisner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**		ft_sort - Распределяет стек в нужную функцию,
** 		распределение зависит от количества элементов(чисел) в стеке.
*/

void	ft_sort(t_stacks *stacks)
{
	if (stacks->count_a <= 3)
		ft_sort_3_element(stacks);
	else if (stacks->count_a <= 5)
		ft_sort_5_element(stacks);
	else
		ft_global_sort(stacks);
}

static void	work_array(t_data *new, t_stacks *stacks)
{
	ft_init_stack(new, stacks);
	ft_sort(stacks);
	ft_free_stack(stacks);
}

int	main(int argc, char **argv)
{
	t_data		*new;
	t_stacks	*stacks;

	if (argc < 1)
		exit(1);
	new = (t_data *)malloc(sizeof(t_data));
	if (!(new))
		exit(1);
	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!(stacks))
		exit(1);
	ft_null(stacks, new);
	if (ft_validation(argc, argv))
	{
		ft_array_separation(argc, argv, new);
		ft_duplicate_check(new, stacks);
		if (ft_is_sorted(new))
			work_array(new, stacks);
	}
	free(new);
	free(stacks);
	return (0);
}
