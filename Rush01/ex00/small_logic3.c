/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_logic3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:27:30 by jborner           #+#    #+#             */
/*   Updated: 2023/03/26 22:49:07 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	row_2_1(int **matrix, int *row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row[i + 8] == 2 && row[i + 12] == 1)
		{
			matrix[0][i] = 3;
		}
		i++;
	}
}

void	row_1_2(int **matrix, int *row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row[i + 8] == 1 && row[i + 12] == 2)
		{
			matrix[3][i] = 3;
		}
		i++;
	}
}

void	colup_next_to_3(int **matrix, int *col_row)
{
	int	i;
	int	j;
	int	test_value;

	i = 0;
	while (i < 4)
	{
		test_value = 1;
		if (col_row[i] == 3 && matrix[0][i] == 0)
		{
			j = 0;
			while (j < 4)
			{
				if (matrix[j][i] == test_value || matrix[0][j] == test_value)
				{
					test_value++;
				}
				j++;
			}
			matrix[0][i] = test_value;
		}
		i++;
	}
}

void	coldown_next_to_3(int **matrix, int *col_row)
{
	int	i;
	int	j;
	int	test_value;

	i = 0;
	while (i < 4)
	{
		test_value = 1;
		if (col_row[i + 4] == 3 && matrix[3][i] == 0)
		{
			j = 0;
			while (j < 4)
			{
				if (matrix[j][i] == test_value || matrix[3][j] == test_value)
				{
					test_value++;
				}
				j++;
			}
			matrix[3][i] = test_value;
		}
		i++;
	}
}

void	rowup_next_to_3(int **matrix, int *col_row)
{
	int	i;
	int	j;
	int	test_value;

	i = 0;
	while (i < 4)
	{
		test_value = 1;
		if (col_row[i + 8] == 3 && matrix[i][0] == 0)
		{
			j = 0;
			while (j < 4)
			{
				if (matrix[i][j] == test_value || matrix[j][0] == test_value)
				{
					test_value++;
				}
				j++;
			}
			matrix[i][0] = test_value;
		}
		i++;
	}
}
