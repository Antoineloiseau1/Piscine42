/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:30:55 by anloisea          #+#    #+#             */
/*   Updated: 2022/01/29 17:55:15 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_top_bot(int x);
void	ft_print_middle(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x != 0 && y != 0)
	{
		ft_print_top_bot(x);
		ft_putchar('\n');
		while (i < y -2)
		{
			ft_print_middle(x);
			ft_putchar('\n');
			i++;
		}
		if (y >= 2)
		{		
			ft_print_top_bot(x);
			ft_putchar('\n');
		}
	}
}

void	ft_print_top_bot(int x)
{	
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	ft_print_middle(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}
