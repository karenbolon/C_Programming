/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rest_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:29:05 by jborner           #+#    #+#             */
/*   Updated: 2023/03/26 22:49:03 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	testing_value(int i, int j, int k, int **matrix, int test_value)
{
	if (matrix[i][k] == test_value || matrix[k][j] == test_value)
	{
		test_value--;
		test_value = testing_value(i, j, k, matrix, test_value);
	}
	return (test_value);
}

void	set_value(int i, int j, int **matrix)
{
	int	k;
	int	test_value;

	test_value = 4;
	k = 0;
	while (k < 4)
	{
		test_value = testing_value(i, j, k, matrix, test_value);
		k++;
	}
	matrix[i][j] = test_value;
}

void	rest_logic(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix[i][j] == 0)
			{
				set_value(i, j, matrix);
			}
			if (matrix[j][i] == 0)
			{
				set_value(j, i, matrix);
			}
			j++;
		}
		i++;
	}
}

void	rowdown_next_to_3(int **matrix, int *col_row)
{
	int	i;
	int	j;
	int	test_value;

	i = 0;
	while (i < 4)
	{
		test_value = 1;
		if (col_row[i + 12] == 3 && matrix[i][3] == 0)
		{
			j = 0;
			while (j < 4)
			{
				if (matrix[i][j] == test_value || matrix[j][3] == test_value)
				{
					test_value++;
				}
				j++;
			}
			matrix[i][3] = test_value;
		}
		i++;
	}
}
