/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:09:13 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:09:13 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*liste_to_arr(t_list *stack, int len)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		arr[i] = stack->num;
		stack = stack->next;
		i++;
	}
	return (arr);
}

int	stack_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_free(t_list **a, t_list **b, t_data *data, int i)
{
	ft_lstclear(a);
	ft_lstclear(b);
	free(data);
	if (i == 1)
		write(1, "Error\n", 6);
	exit(1);
}

long long	ft_atoi(const char *str)
{
	int			i;
	long		count;
	long long	nbr;

	i = 0;
	count = 1;
	nbr = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		count = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr = (str[i] - '0') + (nbr * 10);
		i++;
	}
	return (nbr * count);
}

void	stack_del(t_list **stack)
{
	t_list	*del;
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		del = tmp;
		tmp = tmp->next;
		free(del);
	}
	*stack = NULL;
}
