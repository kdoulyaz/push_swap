/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 02:51:30 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/18 21:24:10 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	do_three(t_list **stack)
{
	while (!stack_sorted(stack))
	{
		if ((*stack)->num > (*stack)->next->num
			&& (*stack)->num > (*stack)->next->next->num
			&& (*stack)->next->num < (*stack)->next->next->num)
			ra(stack, 1);
		else if ((*stack)->num < (*stack)->next->num
			&& (*stack)->num > (*stack)->next->next->num
			&& (*stack)->next->num > (*stack)->next->next->num)
			rra(stack, 1);
		else
			sa(stack, 1);
	}
}

void	do_four(t_list **stack_a, t_list **stack_b)
{
	while (s_len(stack_a) > 3)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 3)
			pb(stack_b, stack_a, 1);
		else if (lst_last(*stack_a)->index == 0
			|| lst_last(*stack_a)->index == 3)
		{
			rra(stack_a, 1);
			pb(stack_b, stack_a, 1);
		}
		else
			ra(stack_a, 1);
	}
	do_three(stack_a);
	if ((*stack_b)->index == 0)
		pa(stack_a, stack_b, 1);
	else
	{
		pa(stack_a, stack_b, 1);
		ra(stack_a, 1);
	}
}

void	do_five(t_list **stack_a, t_list **stack_b)
{
	while (s_len(stack_a) > 3)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 4)
			pb(stack_b, stack_a, 1);
		else if (lst_last(*stack_a)->index == 0
			|| lst_last(*stack_a)->index == 4)
		{
			rra(stack_a, 1);
			pb(stack_b, stack_a, 1);
		}
		else
			ra(stack_a, 1);
	}
	do_three(stack_a);
	while (*stack_b)
	{
		pa(stack_a, stack_b, 1);
		if ((*stack_a)->index == 4)
			ra(stack_a, 1);
	}
}
