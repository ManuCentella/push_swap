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
void fill_stack(t_stack **stack, t_stack *new_node);
char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
int	ft_isdigit(int c);
int	ft_strcmp(char *s1, char *s2);
void print_stack(t_stack *head);





#endif