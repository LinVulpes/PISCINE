/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:56:14 by thmu              #+#    #+#             */
/*   Updated: 2023/07/02 16:56:16 by thmu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(int arr[4][4]);
//increment or decrement the values in a specified row/column of 4x4 grid, 
//based on the provided constant value.

void	inc_assign(int grid[4][4], int cons, int row_column, int add_or_sub)
{
	int	a;

	if (add_or_sub == 0)
	{
		a = -1;
		while (++a < 4)
		{
			if (row_column == 0)
				grid[cons][a] = a + 1;
			else
				grid[a][cons] = a + 1;
		}
	}
	else
	{
		a = 4;
		while (--a > -1)
		{
			if (row_column == 0)
				grid[cons][a] = 4 - a;
			else
				grid[a][cons] = 4 - a;
		}
	}
}
//asign the value of 4 within the grid

void	assign_one(int grid[4][4], int i, int y)
{
	if (i == 0)
		grid[0][y] = 4;
	else if (i == 1)
		grid[3][y] = 4;
	else if (i == 2)
		grid[y][0] = 4;
	else
		grid[y][3] = 4;
}
//assign the functons(assign_one and inc_asign)

void	assign(int grid[4][4], int *i, int *y, int arr[4][4])
{
	if (arr[*i][*y] == 1)
		assign_one(grid, *i, *y);
	else if (*i == 0)
		inc_assign(grid, *y, 1, 0);
	else if (*i == 1)
		inc_assign(grid, *y, 1, 1);
	else if (*i == 2)
		inc_assign(grid, *y, 0, 0);
	else
		inc_assign(grid, *y, 0, 1);
}
//i =  over the rows of 'arr' and 'grid'
//j = over the columns of 'arr' and 'grid'
//init_grid = goes through the rows & columns in the arr & grid, 
//then modify the values.
//grid will be modified according to the values in the arr

void	init_grid(int arr[4][4], int grid[4][4])
{
	int	i;
	int	y;

	i = -1;
	while (++i < 4)
	{
		y = -1;
		while (++y < 4)
		{
			if (arr[i][y] == 4 || arr[i][y] == 1)
			{
				assign(grid, &i, &y, arr);
			}
		}
	}
}
/*
int	main()
{
	int arr[4][4] = {{1,2,3,3},{3,3,1,2},{1,2,2,2},{4,3,1,2}};
	int grid[4][4] = { -1 };
	init_grid(arr, grid);
	print(grid);
	return 0;
}*/
