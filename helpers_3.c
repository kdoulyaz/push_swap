/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:52:37 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/19 23:46:37 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
	{
		last = last->next;
	}
	return (last);
}

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int	find_next_index_in_b(t_list **a, t_list **b)
{
	t_list	*stack_b;

	stack_b = *b;
	while (stack_b != NULL)
	{
		if (stack_b->index == ft_lstlast(*a)->index + 1)
			return (1);
		stack_b = stack_b->next;
	}
	return (0);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
}
