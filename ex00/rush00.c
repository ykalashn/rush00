/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:59:40 by ykalashn          #+#    #+#             */
/*   Updated: 2019/07/14 21:57:36 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row < y && x > 0)
	{
		while (col < x)
		{
			if ((col == 0 || col == x - 1) && (row == 0 || row == y - 1))
				ft_putchar('o');
			else if (col == 0 || col == x - 1)
				ft_putchar('|');
			else if (row == 0 || row == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		col = 0;
		row++;
	}
}
