/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouves2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:09:39 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:09:39 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ss(t_list **head_a, t_list **head_b, int n)
{
	sa(head_a, 0);
	sb(head_b, 0);
	if (n == 1)
		write(1, "ss\n", 3);
}

void	rr(t_list **head_a, t_list **head_b, int n)
{
	ra(head_a, 0);
	ra(head_b, 0);
	if (n == 1)
		write(1, "rr\n", 3);
}

void	rrr(t_list **head_a, t_list **head_b, int n)
{
	rra(head_a, 0);
	rrb(head_b, 0);
	if (n == 1)
		write(1, "rrr\n", 4);
}
