/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:19:30 by mberglun          #+#    #+#             */
/*   Updated: 2019/11/14 04:15:45 by mikaelber        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlib.h"

int	main(int argc, char **argv)
{
	int		fd[10];
	int		fdi;
	char	*cline;

	if (argc < 2)
	{
		fd[0] = 0;
	}
	else if (argc > 1)
	{
		fdi = 0;
		while (fdi < argc -1)
		{
			fd[fdi] = open(argv[fdi + 1], O_RDONLY);
			if (fd[fdi] < 0)
			{
				printf("Unable to open file for testing: %s\n", argv[fdi + 1]);
				return (0);
			}
			++fdi;
		}
	}

	cline = NULL;
	while (get_next_line(fd[0], &cline))
	{
		printf("%s\n", cline);
		if (fd[1])
		{
			get_next_line(fd[1], &cline);
			printf("%s\n", cline);
		}

	}

	int i = 0;
	while (i < fdi)
	{
		close(fd[fdi]);
		++i;
	}

	while (0)
	{

	}

	return (0);
}
