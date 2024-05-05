
#include "../include/push_swap.h"

int split_arguments(t_stack **stack_a, char *argv)
{
    char **args;
    int i = 0;

    args = ft_split(argv, ' ');
    if (!args)
    {
        write(2, "Error\n", 6);
        exit(EXIT_FAILURE);
    }
    while (args[i] != NULL)
    {
        process_arg(stack_a, &args[i]); // Pasar la dirección de stack_a
        i++;
    }
    free(args);
    return 1;
}



void process_arg(t_stack **stack_a, char **argv)
{
    int i = 1;

    while (argv[i] != NULL)
    {
        if (!is_valid(argv[i]))
        {
            exit(EXIT_FAILURE);
        }       
        i++;
    }
    i = 1;
    while (argv[i] != NULL)
    {
        long num = ft_atol(argv[i]);
        if (!ft_error(&num, 1)) // Pasar la dirección de num
            stack_add(stack_a, stack_new((int)num)); // Convertir num a int y pasar como argumento
        i++;
    }
}

// !!PONTE LA NORMINETTE!!

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack	*stack_b;
	int		stack_size;
	int     i;

	stack_a = NULL;
    stack_b = NULL;
	if (argc == 2)
		split_arguments(&stack_a, argv[1]);
	else if (argc > 2)
	{
		i = 0; 
		while (i++ < argc)
			process_arg(&stack_a, &argv[i]);
		stack_size = get_stack_size(stack_a);
		get_index(stack_a, stack_size + 1);
		push_swap(&stack_a, &stack_b, stack_size);
	}
	return (0);
}
