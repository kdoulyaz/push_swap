/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:03:15 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/15 19:09:21 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*lst_last(t_list *stack)
{
	t_list	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

int	s_len(t_list **stack)
{
	t_list	*tmp;
	int		len;

	len = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}

t_list	*lst_new(void)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	head->num = 0;
	head->index = 0;
	head->next = NULL;
	return (head);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (*s == 0)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}
