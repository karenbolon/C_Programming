/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:05:52 by jborner           #+#    #+#             */
/*   Updated: 2023/03/26 22:49:01 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		*parse_col_row(char **argv, int n);
int		**put_matrix(int n);
void	put_char_logic(int **matrix, int *col_row);
void	rest_logic(int **matrix);
void	write_matrix(int **matrix, int n);
void	free_matrix(int **matrix, int n);
int		error_handling(int *col_row, char **argv, int argc);

int	main(int argc, char **argv)
{
	int	*col_row;
	int	**matrix;
	int	n;

	n = 4;
	col_row = parse_col_row(argv, n);
	if (!error_handling(col_row, argv, argc))
		return (0);
	matrix = put_matrix(n);
	put_char_logic(matrix, col_row);
	rest_logic(matrix);
	write_matrix(matrix, n);
	free_matrix(matrix, n);
	free(col_row);
	return (1);
}
