/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:23:48 by wmessmer          #+#    #+#             */
/*   Updated: 2022/07/16 14:23:54 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <rush.h>

int ft_backtrack(char **tab, int size, int nb)
{
    int i;
    int x;
    int y;

    if (n == size*size)
        return (1);
    x = n % (size/4);
    y = n / (size/4);
    i = 0;
    while ( i <=size)
    {
        tab[y][x] = i;
    }

}