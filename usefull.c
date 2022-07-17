/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:25:40 by wmessmer          #+#    #+#             */
/*   Updated: 2022/07/16 12:19:02 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <ft_rush.h>

void	error_message(void)
{
	ft_putstr("Error\n");
	return (0);
}

void	ftputchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ftputchar(*str);
		str++;
	}
}
/*int		getsize(char *size)
{
	int	i;
	int	taille;

	i =0;
	while (size[i])
	{
		if (size[i] =< '0' || size[i] >= '9')
			i++;
		else
		{
			taille++;
			i++;
		}
	}
	if !(taille % 4 = 0)
		return (0);
	return (taille);
}*/
