/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:19:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/12 10:06:05 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*cline;

	if (argc < 2)
	{
		fd = 0;
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("Unable to open file for testing\n");
			return (0);
		}
	}

	while (get_next_line(fd, &cline))
	{
		printf("%s\n", cline);
	}

	return (0);
}
