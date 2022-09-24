/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:09:00 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:09:00 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_data	*ft_data(void)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	data->main_min = 0;
	data->min = 0;
	data->mid = 0;
	data->max = 0;
	return (data);
}

void	ft_stack_data(t_list **lst, t_data **data)
{
	t_list	*temp;
	int		*arr;
	int		i;

	i = 0;
	temp = (*lst);
	arr = malloc(ft_lstsize(*lst) * sizeof(int));
	while (temp)
	{
		arr[i] = temp->num;
		i++;
		temp = temp->next;
	}
	quick_sort(arr, 0, ft_lstsize(*lst) - 1);
	(*data)->min = arr[0];
	(*data)->mid = arr[ft_lstsize(*lst) / 2];
	(*data)->max = arr[ft_lstsize(*lst) - 1];
	free(arr);
}

t_list	*copy_list(int ac, char **av)
{
	int		i;
	t_list	*first;
	t_list	*tmp;

	i = 1;
	first = lst_new();
	tmp = first;
	while (i < ac)
	{
		if (check_av(av[i]))
		{
			stack_del(&first);
			return (NULL);
		}
		tmp->num = ft_atoi(av[i]);
		if (i < ac - 1)
		{
			tmp->next = lst_new();
			tmp = tmp->next;
			tmp->index = 0;
		}
		i++;
	}
	check_doubles(&first);
	return (first);
}
