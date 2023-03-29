/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   after_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:35:47 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/26 22:49:03 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	col_4_1(int **matrix, int *col);
void	col_1_4(int **matrix, int *col);
void	col_3_2(int **matrix, int *col);
void	col_2_3(int **matrix, int *col);
void	col_2_1(int **matrix, int *col);
void	col_1_2(int **matrix, int *col);
void	row_4_1(int **matrix, int *row);
void	row_1_4(int **matrix, int *row);
void	row_3_2(int **matrix, int *row);
void	row_2_3(int **matrix, int *row);
void	row_2_1(int **matrix, int *row);
void	row_1_2(int **matrix, int *row);
void	colup_next_to_3(int **matrix, int *col_row);
void	coldown_next_to_3(int **matrix, int *col_row);
void	rowup_next_to_3(int **matrix, int *col_row);
void	rowdown_next_to_3(int **matrix, int *col_row);

void	free_matrix(int **matrix, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	write_matrix(int **matrix, int n)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			c = matrix[i][j] + '0';
			write(1, &c, 1);
			if (j != n - 1)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	put_char_logic(int **matrix, int *col_row)
{
	col_4_1(matrix, col_row);
	col_1_4(matrix, col_row);
	col_3_2(matrix, col_row);
	col_2_3(matrix, col_row);
	col_2_1(matrix, col_row);
	col_1_2(matrix, col_row);
	row_4_1(matrix, col_row);
	row_1_4(matrix, col_row);
	row_3_2(matrix, col_row);
	row_2_3(matrix, col_row);
	row_2_1(matrix, col_row);
	row_1_2(matrix, col_row);
	colup_next_to_3(matrix, col_row);
	coldown_next_to_3(matrix, col_row);
	rowup_next_to_3(matrix, col_row);
	rowdown_next_to_3(matrix, col_row);
}

int	array_error(int *col_row)
{
	int	sum;

	sum = 0;
	while (*col_row != 0)
	{
		sum += *col_row;
		if (4 < *col_row || *col_row < 1)
		{
			write(1, "You can only use Digits 1 to 4.\n", 32);
			return (0);
		}
		col_row++;
	}
	if (sum < 28 || 42 < sum)
	{
		write(1, "Usage: ./program <16 digits 1-4 with space between>.\n", 51);
		return (0);
	}
	return (1);
}

int	error_handling(int *col_row, char **argv, int argc)
{
	int		count;
	char	*str;

	str = argv[1];
	count = 0;
	if (argc != 2)
	{
		write(1, "Usage: ./program <16 digits 1-4 with space between>.\n", 59);
		return (0);
	}
	while (*str)
	{
		count++;
		str++;
	}
	if (count != 31)
	{
		write(1, "Not the right amount of char.\n", 30);
		return (0);
	}
	if (!array_error(col_row))
		return (0);
	return (1);
}
