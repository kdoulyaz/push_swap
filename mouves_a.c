/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouves.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:09:29 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:09:29 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_list **head, int n)
{
	t_list	*stack;

	stack = *head;
	if (stack && stack->next)
	{
		ft_swap(&stack->num, &stack->next->num);
		ft_swap(&stack->index, &stack->next->index);
		if (n == 1)
			write(1, "sa\n", 3);
	}
}

void	pa(t_list **head_to, t_list **head_from, int n)
{
	t_list	*tmp;
	t_list	*to;
	t_list	*from;

	to = *head_to;
	from = *head_from;
	if (!from)
		return ;
	tmp = from;
	from = from->next;
	*head_from = from;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*head_to = to;
	}
	else
	{
		tmp->next = to;
		*head_to = tmp;
	}
	if (n == 1)
		write(1, "pa\n", 3);
}

void	ra(t_list **head, int n)
{
	t_list	*stack;
	t_list	*tmp;

	stack = *head;
	if (!(stack && stack->next))
		return ;
	tmp = stack;
	*head = stack->next;
	while (stack->next)
		stack = stack->next;
	stack->next = tmp;
	tmp->next = NULL;
	if (n == 1)
		write(1, "ra\n", 3);
}

void	rra(t_list **head, int n)
{
	t_list	*stack;
	t_list	*tmp;
	t_list	*previous;

	stack = *head;
	if (!(stack && stack->next))
		return ;
	tmp = stack;
	while (stack->next)
	{
		previous = stack;
		stack = stack->next;
	}
	previous->next = NULL;
	stack->next = tmp;
	*head = stack;
	if (n == 1)
		write(1, "rra\n", 4);
}
