/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:09:50 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:09:50 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_short_sort(t_list **stack, int len)
{
	if (len == 1)
	{
		write(1, "Error\n", 6);
		return ;
	}
	if (len == 2 && (*stack)->num > (*stack)->next->num)
		sa(stack, 1);
	if (len == 3)
		do_three(stack);
	return ;
}

void	ft_sort(t_list **stack_a, t_list **stack_b, t_data **data)
{
	int	len;

	ft_stack_data(stack_a, data);
	(*data)->main_min = (*data)->min;
	len = s_len(stack_a);
	if (len == 4)
		do_four(stack_a, stack_b);
	else if (len == 5)
		do_five(stack_a, stack_b);
	else
		big_sort(stack_a, stack_b, data);
}

void	ft_main(t_list **stack_a, t_list **stack_b)
{
	t_data	*data;

	data = ft_data();
	ft_index(stack_a);
	ft_sort(stack_a, stack_b, &data);
	ft_free(stack_a, stack_b, data, 0);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		len;

	if (ac <= 2)
		exit(1);
	stack_a = copy_list(ac, av);
	if (!(stack_a))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	len = s_len(&stack_a);
	stack_b = NULL;
	if (stack_sorted(&stack_a))
		exit(1);
	if (len < 4)
	{
		ft_short_sort(&stack_a, len);
		stack_del(&stack_a);
		return (0);
	}
	ft_main(&stack_a, &stack_b);
	return (0);
}
