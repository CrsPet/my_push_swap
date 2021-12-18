#include "push_swap.h"

int main (int argc, char *argv[])
{
	int ok;
	int arr_length;
	int *arr;
	t_list	*listA;
	t_list	*listB;

	listA = NULL;
	ok = validation(argc, argv, &arr, &arr_length);
	if (-1 == ok)
		return (0);
	if (!ok)
		return (0);
	ft_putendl_fd("OK", 1);
	initialisation(arr, &listA, arr_length - 1);
	list_sort(&listA, &listB);
	preparing_b_to_a(&listA, &listB);
	print_list (&listA);
	print_list (&listB);
	free (arr);
	return (0);
}