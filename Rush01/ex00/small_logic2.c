/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_logic2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:26:08 by jborner           #+#    #+#             */
/*   Updated: 2023/03/26 22:49:05 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_1_2(int **matrix, int *col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col[i] == 1 && col[i + 4] == 2)
		{
			matrix[3][i] = 3;
		}
		i++;
	}
}

void	row_4_1(int **matrix, int *row)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (row[i + 8] == 4 && row[i + 12] == 1)
		{
			while (j < 4)
			{
				matrix[i][j] = j + 1;
				j++;
			}
		}
		i++;
	}
}

void	row_1_4(int **matrix, int *row)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (row[i + 8] == 1 && row[i + 12] == 4)
		{
			m = 4;
			while (j < 4)
			{
				matrix[i][j] = m;
				j++;
				m--;
			}
		}
		i++;
	}
}

void	row_3_2(int **matrix, int *row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row[i + 8] == 3 && row[i + 12] == 2)
		{
			matrix[i][2] = 4;
		}
		i++;
	}
}

void	row_2_3(int **matrix, int *row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row[i + 8] == 2 && row[i + 12] == 3)
		{
			matrix[i][1] = 4;
		}
		i++;
	}
}
