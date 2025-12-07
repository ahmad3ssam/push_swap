#include "push_swap.h"


int create_a(char *list)
{



}

int main(int argc, char **argv)
{
    if(argc == 1)
        return (-1);
    t_stack *a = malloc(sizeof(t_stack));
    t_stack *b = malloc(sizeof(t_stack));

    t_node *i = malloc(sizeof(t_node));
    t_node *t = malloc(sizeof(t_node));
    
    i->next=NULL;
    i->value=12;

    t->next=NULL;
    t->value=13;
    
    t->next = i;
    a->head = t;
    a->tail = i;
    a->size = 2;

    printf("%d\n",a->head->value);
    printf("%d\n",a->tail->value);
    printf("%d\n",a->head->next->value);
    printf("%d\n",a->size);

}
