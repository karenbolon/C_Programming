/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_logic1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:25:22 by jborner           #+#    #+#             */
/*   Updated: 2023/03/26 22:49:06 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_4_1(int **matrix, int *col)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (col[i] == 4 && col[i + 4] == 1)
		{
			while (j < 4)
			{
				matrix[j][i] = j + 1;
				j++;
			}
		}
		i++;
	}
}

void	col_1_4(int **matrix, int *col)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (col[i] == 1 && col[i + 4] == 4)
		{
			m = 4;
			while (j < 4)
			{
				matrix[j][i] = m;
				j++;
				m--;
			}
		}
		i++;
	}
}

void	col_3_2(int **matrix, int *col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col[i] == 3 && col[i + 4] == 2)
		{
			matrix[2][i] = 4;
		}
		i++;
	}
}

void	col_2_3(int **matrix, int *col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col[i] == 2 && col[i + 4] == 3)
		{
			matrix[1][i] = 4;
		}
		i++;
	}
}

void	col_2_1(int **matrix, int *col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col[i] == 2 && col[i + 4] == 1)
		{
			matrix[0][i] = 3;
		}
		i++;
	}
}
