#include "push_swap.h"

int free_all(t_stack *a, t_stack *b)
{
    t_node  *temp;
    t_node  *current;

    current = a->head;
    printf("hi");
    while (current)
    {
        temp = current;
        current = current->next;
        printf("ui");
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
    return (0);
}


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

float	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long    result;

	i = 0;
	sign = 1;
	result = 0;
    if(!str || str[0] == '\0')
        return (1.1);
    // printf("string is %s\n",str);
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
    if(str[i] != '\0')
    {
        // printf("hellp");
            return (0);
    }
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

int create_a(t_stack *a, char **list, int index)
{
    int     num;
    t_node *node; 
    
    while(index > 0)
    {
        num = ft_atoi(list[index]);
        // printf("%d %d\n",num,num == 0);
        if(num == 0)
            return (-1);
        node = malloc(sizeof(t_node));
        node -> value = num;
        node -> next = NULL;
        push_a(a,node);
        index--;
        free(node);
    }
    return (1);
}

int main(int argc, char **argv)
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
    printf("hi%d\n",argc);

    if(create_a(a,argv,argc-1) == -1)
        return (free_all(a,b));
    
    // while (a->head)
    // {
    //     printf("stack a values: %d\n",a->head->value);
    //     a->head = a->head->next;
    // }
    printf("size %d",a->size);

}
