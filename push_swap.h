/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:09:59 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/09 16:09:59 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				num;
	int				index;
	struct s_list	*next;
}t_list;

typedef struct s_data
{
	int				main_min;
	int				mid;
	int				min;
	int				max;
}					t_data;

void		sa(t_list **head, int n);
void		pa(t_list **head_to, t_list **head_from, int n);
void		ra(t_list **head, int n);
void		rra(t_list **head, int n);
void		sb(t_list **head, int n);
void		pb(t_list **head_to, t_list **head_from, int n);
void		rb(t_list **head, int n);
void		rrb(t_list **head, int n);
void		ss(t_list **head_a, t_list **head_b, int n);
void		rr(t_list **head_a, t_list **head_b, int n);
void		rrr(t_list **head_a, t_list **head_b, int n);
void		ft_swap(int *a, int *b);
t_data		*ft_data(void);
void		ft_index(t_list **stack_a);
void		do_three(t_list **stack);
void		do_four(t_list **stack_a, t_list **stack_b);
void		do_five(t_list **stack_a, t_list **stack_b);
t_list		*lst_new(void);
t_list		*copy_list(int ac, char **av);
void		stack_del(t_list **stack);
int			s_len(t_list **stack);
void		quick_sort(int *stack, int lb, int ub);
int			check_av(char *str);
void		check_doubles(t_list **stack);
int			*liste_to_arr(t_list *stack, int len);
void		ft_stack_data(t_list **stack, t_data **data);
t_list		*lst_last(t_list *stack);
void		ft_free(t_list **a, t_list **b, t_data *data, int i);
void		big_sort(t_list **stack_a, t_list **stack_b, t_data **data);
int			stack_sorted(t_list **stack);
long long	ft_atoi(const char *str);
int			ft_isdigit(int c);
size_t		ft_strlen(const char *str);
void		big_sort(t_list **stack_a, t_list **stack_b, t_data **data);
void		recursion(t_list **stack_a, t_list **stack_b, t_data **data);
void		part_to_a(t_list **stack_a, t_list **stack_b, t_data **data);
void		part_to_b(t_list **stack_a, t_list **stack_b, t_data **data,
				int first);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
int			find_next_index_in_b(t_list **a, t_list **b);
int			ft_partition(int *arr, int start, int end);
int			ft_duplicate(int *arr, int size);
void		ft_position(t_list **lst, int *arr);
void		ft_indx(t_list **a, t_list **b, t_data **data);
void		ft_lstclear(t_list **lst);

#endif