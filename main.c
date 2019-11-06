/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:19:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/05 20:38:51 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(void)
{
	int		fd;
	char	*cline;

	fd = open("./Makefile", O_RDONLY);
	if (fd < 0)
	{
		printf("Unable to open file for testing\n");
		return (0);
	}

	int i = 0;
	while (get_next_line(fd, &cline))
	{
		printf(">%d:%s", i++, cline);
	}
	return (0);
}
