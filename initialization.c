/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisner <aisner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:06:22 by aisner            #+#    #+#             */
/*   Updated: 2022/03/12 18:49:33 by aisner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**		ft_init_stack - Инициализируем стеки.
**		Формируем стек А, переписывая данные
**		из массива чисел в списки.
**			༺༻
**		Состояние:	✓
**		Нормы:		✓
**			༺༻
*/

void	ft_init_stack(t_data *new, t_stacks *stacks)
{
	stacks->a = ft_create_stack(new->a, new->count_element);
	stacks->b = NULL;
}

/*
**		ft_create_stack - Формируем стек,
**		переписывая числа из массива buff в листы(списки).
**			༺༻
**		Состояние:	✓
**		Нормы:		✓
**			༺༻
*/

t_stack	*ft_create_stack(const int *buff, int count)
{
	int		i;
	t_stack	*new_list;
	t_stack	*first_element;

	i = 0;
	new_list = (t_stack *)malloc(sizeof(t_stack));
	if (!(new_list))
		exit(1);
	first_element = new_list;
	while (i < count)
	{
		if (i < count - 1)
		{
			new_list->next = (t_stack *)malloc(sizeof(t_stack));
			if (!(new_list->next))
				exit(1);
		}
		new_list->data = buff[i];
		if (i == (count - 1))
			new_list->next = NULL;
		else
			new_list = new_list->next;
		i++;
	}
	return (first_element);
}

/*
**		ft_free_stack - Освобождаем память выделенную под стек.
**			༺༻
**		Состояние:	✓
**		Нормы:		✓
**			༺༻
*/

void	ft_free_stack(t_stacks *stacks)
{
	int		i;
	t_stack	*buff;

	i = 0;
	while (i < stacks->count_a)
	{
		buff = stacks->a;
		stacks->a = stacks->a->next;
		free(buff);
		i++;
	}
	i = 0;
	while (i < stacks->count_b)
	{
		buff = stacks->b;
		stacks->b = stacks->b->next;
		free(buff);
		i++;
	}
}

/*
**		ft_null - Обнуляем данные в структуре..
*/

void	ft_null(t_stacks *stacks, t_data *new)
{
	new->count_element = 0;
	stacks->count_a = 0;
	stacks->count_b = 0;
	stacks->min = 0;
	stacks->max = 0;
	stacks->med = 0;
	stacks->a = NULL;
	stacks->b = NULL;
}
