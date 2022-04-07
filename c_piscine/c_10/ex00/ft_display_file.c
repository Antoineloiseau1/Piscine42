/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:28:45 by anloisea          #+#    #+#             */
/*   Updated: 2022/02/15 18:45:15 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int	main(int argc, char **argv)
{
	char	tab[4096];
	int		fd;

	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (0);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (read(fd, tab, 4096) == -1)
	{
		write(2, "Cannot Read File.\n", 18);
		close(fd);
		return (0);
	}
	ft_putstr(tab);
	close(fd);
	return (0);
}
