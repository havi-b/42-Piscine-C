/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 22:59:56 by faugusti          #+#    #+#             */
/*   Updated: 2018/08/26 23:00:14 by faugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	w = 1;
	h = 1;
	while ((w <= x && h <= y) && (w >= 0 && h >= 0))
	{
		if ((w == 1 && h == 1) || (w == 1 && h == y))
			ft_putchar('A');
		else if ((h == 1 && w == x) || (w == x && h == y))
			ft_putchar('C');
		else if ((h == 1 && w > 1 && w < x) || (h == y && w < x && w > 1))
			ft_putchar('B');
		else if ((w == 1 && h > 1 && h < y) || ((w == x && h > 1 && h < y)))
			ft_putchar('B');
		else if (w > 1 && h > 1 && w < x && h < y)
			ft_putchar(' ');
		if (w == x)
		{
			w = 0;
			h++;
			ft_putchar('\n');
		}
		w++;
	}
}
