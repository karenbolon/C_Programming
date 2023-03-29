/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:13:49 by jborner           #+#    #+#             */
/*   Updated: 2023/03/26 22:49:04 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	put_matrix_inner(int **matrix, int i, int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		matrix[i][j] = 0;
		j++;
	}
}

int	**put_matrix(int n)
{
	int	**matrix;
	int	i;

	matrix = (int **)malloc(n * sizeof(int *));
	i = 0;
	while (i < n)
	{
		matrix[i] = (int *)malloc(n * sizeof(int));
		put_matrix_inner(matrix, i, n);
		i++;
	}
	return (matrix);
}

int	*parse_col_row(char **argv, int n)
{
	int		*col_row;
	char	*str;
	int		i;

	col_row = malloc((n * n) * sizeof(int));
	str = argv[1];
	i = 0;
	while (*str && i < (n * n))
	{
		if (*str != ' ')
		{
			col_row[i] = *str - '0';
			i++;
		}
		str++;
	}
	return (col_row);
}
