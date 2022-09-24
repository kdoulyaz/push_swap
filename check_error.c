/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chech_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:08:44 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:08:44 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_doubles(t_list **stack)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = s_len(stack);
	arr = liste_to_arr(*stack, len);
	quick_sort(arr, 0, len - 1);
	while (i < len - 1)
	{
		if (arr[i] == arr[i + 1])
		{
			stack_del(stack);
			free(arr);
			return ;
		}
		i++;
	}
	free(arr);
}

int	check_int(char *str)
{
	int	atoi;

	atoi = ft_atoi(str);
	if (str[0] == '-')
	{
		if (atoi > 0)
			return (1);
	}
	if (str[0] != '-')
	{
		if (atoi < 0)
			return (1);
	}
	return (0);
}

int	wts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f'
				|| str[i] == ' ') && str[i + 1] != '\0')
			i++;
		else
			break ;
	}
	return (i);
}

int	check_av(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	i = wts(str);
	if (((str[i] == '-' || str[i] == '+') && len > 11)
		|| ((str[i] != '-') && len > 10))
		return (1);
	if ((str[i] == '-' || str[i] == '+') && !(ft_isdigit(str[i + 1])))
		return (1);
	if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	if (len >= 10 && check_int(str))
		return (1);
	return (0);
}
