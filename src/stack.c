#include "../include/push_swap.h"


t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

/*	Returns the last element of the stack. */

t_stack	*get_bottom(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

/*	Adds an element to the bottom of a stack. */

void	stack_add(t_stack **stack, t_stack *stack_new)
{
	t_stack	*bottom;

	if (!stack_new)
		return ;
	if (!*stack)
	{
		*stack = stack_new;
		return ;
	}
	bottom = get_bottom(*stack);
	bottom->next = stack_new;
}

/* Returns de element before the bottom element */

t_stack	*before_bottom(t_stack *stack)
{
	while (stack && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}	

/*	Returns the number of elements in a stack. */

int	get_stack_size(t_stack	*stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}