#include "push_swap.h"


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

void fill_stack(t_stack **stack, t_stack *new_node)
{
    if (!new_node)
        return;

    new_node->next = *stack;
    *stack = new_node;
}

void print_stack(t_stack *head)
{
    if (head == NULL) {
        printf("La pila está vacía.\n");
        return;
    }

    t_stack *current = head;
    printf("Contenido de la pila:\n");
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}