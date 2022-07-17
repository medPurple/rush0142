//#include <ft_rush.h>

void start(char *val)
{
    int ***test;

    test = (int***)malloc(4 * sizeof(int**));
    malloc_tab(test);
    populate_tab(val, test);
    ft_print_tab(test);
}

int	**creation_tab(int value, int row, int column)
{
	int **tab;
	i i;
	int j;

	tab = (int**)malloc(row * sizeof(int*))	i = 0;
	whil(i < row)
	{
	t[i] = (int*)malloc(column * sizeof(int));
		j = 0;
		while (j < 4)
		{
			t[i][j] = value;
			j++;
		}		i++;
	}
	return tab;
}

void malloc_tab(int **tab)
{
    tab[0] = creation_tab(0, 4, 4);
    tab[1] = creation_tab(0, 4, 4);
    tab[2] = creation_tab(0, 4, 4);
    tab[3] = creation_tab(0, 4, 4);
}

void	ft_print_tab(int tab[4][4])
{
	int	i;
	int		j;	i = 0;
	while(i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(t[i][j]);
			j++;
		}
		write(1, "\n", 1);	i++;
	}
	return ;
}

void	populate_tab(char *val, int ***tab)
{
	int i;
	int l;
	int c;

	c = 0;	
    i = 0;
	while(i < 8)
	{
		if(val[i] == '1')
		{
			tab[3][0][c] = '4' - '0';
			l = 1;
			while(l < 4)
			{
				tab[0][l][c] = '1' - '0';
				tab[1][l][c] = '2' - '0';
				tab[2][l][c] = '3' - '0';
				l++;
			}
			c++;
		}
		else if (val[i] == '2')
		{
			tab[0][0][c] = '1' - '0';
			tab[1][0][c] = '2' - '0';
			tab[2][0][c] = '3' - '0';
			l = 1;
			while(l < 4)
			{
				tab[0][l][c] = '1' - '0';
				tab[1][l][c] = '2' - '0';
				tab[2][l][c] = '3' - '0';
				tab[3][l][c] = '4' - '0';
				l++;
			}
			c++;
		}
		else if (val[i] == '3')
		{
			tab[0][0][c] = '1' - '0';
			tab[1][0][c] = '2' - '0';
			l = 1;
			while (l < 4)
			{
				tab[0][l][c] = '1' - '0';
				tab[1][l][c] = '2' - '0';
				tab[2][l][c] = '3' - '0';
				if (l != 1)
					tab[3][l][c] = '4' - '0';
				l++;
			}
			c++;
		}
		else if (val[i] == '4')
		{
			tab[0][0][c] = '1' - '0';
			tab[1][1][c] = '2' - '0';
			tab[2][2][c] = '3' - '0';
			tab[3][3][c] = '4' - '0';
			c++;
		}		i++;
	}
    ft_print_tab(tab);
}