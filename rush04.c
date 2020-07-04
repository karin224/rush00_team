/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhan <junhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 20:05:05 by junhan            #+#    #+#             */
/*   Updated: 2020/07/04 20:19:01 by junhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first(int now_x, int x)
{
	if (now_x == 0)
		ft_putchar('A');
	else if (now_x == x - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	print_last(int now_x, int x)
{
	if (now_x == 0)
		ft_putchar('C');
	else if (now_x == x - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	print_else(int now_x, int x)
{
	if (now_x == 0 || now_x == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int now_x;
	int now_y;

	now_x = 0;
	now_y = 0;
	while (now_y < y)
	{
		while (now_x < x)
		{
			if (now_y == 0)
				print_first(now_x, x);
			else if (now_y == y - 1)
				print_last(now_x, x);
			else
				print_else(now_x, x);
			now_x++;
		}
		ft_putchar('\n');
		now_x = 0;
		now_y++;
	}
}
