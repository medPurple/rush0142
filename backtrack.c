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
//#include <ft_rush.h>

int verif(int size, char *val)
{
    int c1;
    int c2;
    int c3;
    int c4;

    c1,c2,c3,c4 = 0;
    if ( size != 2 || *val == "\0")
        error_message();
    while (*val)
    {
        if ((val != ' ' && val != '1' && val != '2'
		&& val != '3' && val != '4'))
            error_message();

		else if ((i % 2 != 0) && val != ' ')
            error_message();
        
		vall++;
	}
    while (values[i])
	{
		if (val == '1')
			c1++;
		else if (val == '2')
			c2++;
		else if (val == '3')
			c3++;
        else if (val == '4')
		if (c1 > 4 || c2 > 8 || c3 > 8 || c4 > 4)
		{
			error_message();
		}
		i++;
	}
    start(val);
}

