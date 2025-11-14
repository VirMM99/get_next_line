/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:49:16 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/14 16:50:56 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

// int	open(const char *path, int flags)
// ssize_t	read(int fildes, void *buf, size_t nbytes)

int	main(void)
{
	int		fd;
	char	*felipes;

	fd = open("retrograde_mercury", O_RDONLY);
	while (1)
	{
		felipes = get_next_line(fd);
		if (!felipes)
			break ;
		printf("%s\n", felipes);
		free(felipes);
	}
	return (0);
}
