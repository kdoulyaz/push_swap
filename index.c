/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:54:40 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/20 02:33:19 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_index(t_list **stack_a)
{
	t_list	*tmp;
	int		*arr;
	int		len;
	int		i;

	tmp = *stack_a;
	len = s_len(&tmp);
	arr = liste_to_arr(tmp, len);
	quick_sort(arr, 0, len - 1);
	while (tmp)
	{
		i = 0;
		while (arr[i] != tmp->num)
			i++;
		tmp->index = i;
		tmp = tmp->next;
	}
	free(arr);
}
