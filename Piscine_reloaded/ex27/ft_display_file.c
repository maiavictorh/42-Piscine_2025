/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:28:01 by victode-          #+#    #+#             */
/*   Updated: 2025/10/15 12:35:36 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(const char *s)
{
	while (*s)
		write (1, s++, 1);
}

void	ft_display_file(int fd)
{
	char	buff;

	while (read(fd, &buff, 1) != 0)
		write (1, &buff, 1);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr("File name missing.\n");
		if (ac > 2)
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(av[1], O_RDWR);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
