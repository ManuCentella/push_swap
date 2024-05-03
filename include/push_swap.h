#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h" //Sale del directorio, entra en libft y abre en el .h 


typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;


int	split_arguments(t_stack **stack_a, char *argv);
void process_arg(t_stack **stack_a, char **argv);
int is_valid(char *str);
int ft_error(long *num, int argc);
t_stack	*stack_new(int value);
void	stack_add(t_stack **stack, t_stack *stack_new);
char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
int	ft_isdigit(int c);
int	ft_strcmp(char *s1, char *s2);
void print_stack(t_stack *head);
void	get_index(t_stack *stack_a, int stack_size);
int	is_sorted(t_stack *stack);
static void	rotate(t_stack **stack);
void	do_ra(t_stack **stack_a);
void	do_rb(t_stack **stack_b);
void	do_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_putstr_fd(const char *str, int fd);
static int	biggest_index(t_stack *stack);
void	sort_three(t_stack **stack);
static void	swap(t_stack **stack);
void	do_sa(t_stack **stack_a);
void	do_sb(t_stack **stack_b);
void	do_ss(t_stack **stack_a, t_stack **stack_b);
int	get_stack_size(t_stack	*stack);
static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size);











#endif