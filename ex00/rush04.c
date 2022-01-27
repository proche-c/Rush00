/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgravalo <jgravalo@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:29:37 by jgravalo          #+#    #+#             */
/*   Updated: 2021/10/31 17:33:44 by lblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while ((j > 0) && (j <= y))
	{
		i = 1;
		while ((i > 0) && (i <= x))
		{
			if ((j == 1) && (i == 1))
				ft_putchar('A');
			else if ((j == y) && (i == x) && (x > 1) && (y > 1))
				ft_putchar('A');
			else if (((j == y) && (i == 1)) || ((i == x) && (j == 1)))
				ft_putchar('C');
			else if (((i == 1) || (i == x)) || ((j == 1) || (j == y)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
