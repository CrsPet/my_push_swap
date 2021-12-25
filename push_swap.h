#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_markup_info
{
	t_list	*markup_head;
	int		temp_head;
	int		seq_size;
	int		place;	
	int		border;
}	t_markup_info;
typedef struct s_b_to_a
{
	int	index_a;
	int	place_a;
	int	index_b;
	int	place_b;
	int	iters_a;
	int	iters_b;
	int	sign_a;
	int	sign_b;
	int	min_sum_iters;
	int	min_iterations;
	int	reverse_same_time;
}	t_b_to_a;

int			validation(int argc, char **argv, int **arr, int *arr_length);
int			check_argv(char *str);
int			check_atoi(char *str);
int			str_duo_len(char **arr, int *arr_length);
int			write_bad_message(void);
int			initialisation(int *arr, t_list **list, int arr_length);
int			preparing_b_to_a(t_list **stack_a, t_list **stack_b);
int			is_positive(int num);
int			get_min_num(int a, int b);
int			get_max_num(int a, int b);
int			get_num_abs(int a);
int			find_min_elem_number(t_b_to_a	*info_b_to_a, int stack_b_size);
void		my_markup_greater_then(t_list **list);
void		list_sort(t_list **list, t_list **stack_b);
void		reverse_rotate_stack(t_list **list);
void		rotate_stack(t_list **list);
void		push_stack(t_list **src, t_list **dest);
void		swap_stack(t_list **list);
void		print_list(t_list **list);
void		find_a_elem(t_list **stack_a, t_b_to_a *info_b_to_a, int a_sz);
void		elem_b_to_a(t_list **list_a, t_list **list_b, t_b_to_a info_b_to_a);
t_b_to_a	find_b_elem(t_list *stack_b, t_list **stack_bb, const int b_sz);
t_b_to_a	*get_inf_arr(t_list **list_a, t_list **list_b, int a_sz, int b_sz);
#endif