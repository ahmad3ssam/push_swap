/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammad <ahhammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:55:25 by ahhammad          #+#    #+#             */
/*   Updated: 2025/09/24 13:16:51 by ahhammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "./print/ft_printf.h"

int main(void)
{
    int ret1, ret2;

    // %c
    ret1 = printf("Char: %c\n", 'A');
    ret2 = ft_printf("Char: %c\n", 'A');
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %s
    ret1 = printf("String: %s\n", "Hello, world!");
    ret2 = ft_printf("String: %s\n", "Hello, world!");
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %s with NULL
    ret1 = printf("Null string: %s\n", (char *)NULL);
    ret2 = ft_printf("Null string: %s\n", (char *)NULL);
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %p
    int x = 42;
    ret1 = printf("Pointer: %p\n", &x);
    ret2 = ft_printf("Pointer: %p\n", &x);
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %p with NULL
    ret1 = printf("Null pointer: %p\n", (void *)NULL);
    ret2 = ft_printf("Null pointer: %p\n", (void *)NULL);
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %d / %i
    ret1 = printf("Signed int: %d %i\n", INT_MIN, INT_MAX);
    ret2 = ft_printf("Signed int: %d %i\n", INT_MIN, INT_MAX);
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %u
    ret1 = printf("Unsigned int: %u\n", UINT_MAX);
    ret2 = ft_printf("Unsigned int: %u\n", UINT_MAX);
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %x / %X
    ret1 = printf("Hex lower: %x, upper: %X\n", 3735928559u, 3735928559u);
    ret2 = ft_printf("Hex lower: %x, upper: %X\n", 3735928559u, 3735928559u);
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // %%
    ret1 = printf("Percent: %%\n");
    ret2 = ft_printf("Percent: %%\n");
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    // Mix everything together
    ret1 = printf("Mix: char=%c, str=%s, ptr=%p, d=%d, u=%u, x=%x, X=%X, %%\n",
                  'Z', "test", &x, -12345, 12345u, 255, 255);
    ret2 = ft_printf("Mix: char=%c, str=%s, ptr=%p, d=%d, u=%u, x=%x, X=%X, %%\n",
                  'Z', "test", &x, -12345, 12345u, 255, 255);
    printf("ret1=%d, ret2=%d\n\n", ret1, ret2);

    return 0;
}
