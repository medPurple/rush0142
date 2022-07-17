/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:30:01 by wmessmer          #+#    #+#             */
/*   Updated: 2022/07/16 11:37:16 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_RUSH_H
# define FT_RUSH_H

void	ft_putstr(char *str);
void	ftputchar(char a);
void	error_message(void);
void start(char *val);
int	**creation_tab(int value, int row, int column);
void malloc_tab(int **tab);
void	ft_print_tab(int tab[4][4]);
void	populate_tab(char *val, int ***tab);
int verif(int size, char *val);


#endif
