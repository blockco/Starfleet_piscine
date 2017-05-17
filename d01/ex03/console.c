#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
struct s_stack *stackInit(void)
{
	struct s_stack *ret;

	ret = (struct s_stack*)malloc(sizeof(struct s_stack));
	ret->item = NULL;
	return ret;
}

void push(struct s_stack *stack, int idx)
{
	struct s_item *tmp;

	tmp = (struct s_item*)malloc(sizeof(struct s_item));
	tmp->idx = idx;
	tmp->next = stack->item;
	stack->item = tmp;
}

int pop(struct s_stack *stack)
{
	struct s_item *tmp;

	tmp = stack->item;
	stack->item = tmp->next;
	return (tmp->idx);
}

char *console(void)
{
	char *input;

	input = malloc(251);
	bzero(input, 250);
	while (1)
	{
		printf("%s", "?: ");
		scanf("%s", input);
		printf("%s\n", input);
	}
}
