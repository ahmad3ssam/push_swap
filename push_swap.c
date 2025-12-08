#include "push_swap.h"
#include <limits.h>

int free_all(t_stack *a, t_stack *b, int check)
{
    t_node  *temp;
    t_node  *current;

    current = a->head;
    while (current)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    free(a);
    current = b->head;
    while (current)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    free(b);
    if(check == -1)
    	printf("Error\n");
    return (0);
}


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

long	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long    result;

	i = 0;
	sign = 1;
	result = 0;
    	if(!str || str[0] == '\0')
        	return (LONG_MAX);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
    	if(str[i] != '\0' || result * -1 < INT_MIN)
    		return(LONG_MAX);
	else if (result * sign > INT_MAX)
		return (LONG_MAX);
	return (result * sign);
}

void        push_a(t_stack *a,t_node *node)
{
    if(!(a)->head)
    {
        (a)->head = node;
        (a)->tail = node;
        (a)->size = 1;
    }
    else
    {
        node->next = (a)->head;
        (a)->head = node;
        (a)->size += 1;
    }
}

int	create_a(t_stack *a, char **list, int index)
{
    long	num;
    t_node	*node;

    while(index > 0)
    {
        num = ft_atoi(list[index]);
        if(num == LONG_MAX)
            return (-1);
        node = malloc(sizeof(t_node));
        node -> value = num;
        node -> next = NULL;
        push_a(a,node);
        index--;
    }
    return (1);
}

int	main(int argc, char **argv)
{
	if(argc == 1)
        	return (-1);
	t_stack *a = malloc(sizeof(t_stack));
    	a->head = NULL;
    	a->tail = NULL;
    	a->size = 0;
    	t_stack *b = malloc(sizeof(t_stack));
    	b->head = NULL;
    	b->tail = NULL;
	b->size = 0;
	if(create_a(a,argv,argc-1) == -1)
        	return (free_all(a,b,-1));

	pp(b,a);
	pp(b,a);
	pp(b,a);
	ss(b,a);
	//swap(a);
	t_node *temp = a->head;
     	while (temp)
     	{
        	 printf("stack a values: %d\n",temp->value);
        	 temp = temp->next;
	}
	temp = b->head;
     	while (temp)
     	{
        	 printf("stack a values: %d\n",temp->value);
        	 temp = temp->next;
	}

	//ss(a,b);

	//if(a->tail != NULL)
   		printf("size %d\n",a->size);
	//if(a->head != NULL)
		printf("size %d",b->size);
    //free(a);
    //free(b);
    free_all(a,b,1);
}
