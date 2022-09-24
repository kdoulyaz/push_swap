/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:10:14 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:10:14 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	partition(int *stack, int lb, int ub)
{
	int	pivot;
	int	start;
	int	end;

	pivot = stack[lb];
	start = lb;
	end = ub;
	while (start < end)
	{
		while (stack[start] <= pivot && start < end)
			start++;
		while (stack[end] > pivot)
			end--;
		if (start < end)
			swap(&stack[start], &stack[end]);
	}
	swap(&stack[lb], &stack[end]);
	return (end);
}

void	quick_sort(int *stack, int lb, int ub)
{
	int	pivot;

	if (lb < ub)
	{
		pivot = partition(stack, lb, ub);
		quick_sort(stack, lb, pivot - 1);
		quick_sort(stack, pivot + 1, ub);
	}
}
