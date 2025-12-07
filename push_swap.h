#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
// # include "libft\libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_node
{
    int             value;
    struct s_node   *next;
}   t_node;

typedef struct s_stack
{
    t_node  *head;
    t_node  *tail;
    int      size;
}   t_stack;

#endif