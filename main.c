/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:49:16 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/17 11:24:34 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
// #include <stdio.h>

// // int	open(const char *path, int flags)
// // ssize_t	read(int fildes, void *buf, size_t nbytes)

// int	main(void)
// {
// 	int		fd;
// 	int		fd2;
// 	char	*felipes;

// 	fd = open("retrograde_mercury", O_RDONLY);
// 	fd2 = open("retrograde_mercury2", O_RDONLY);
// 	while (1)
// 	{
// 		felipes = get_next_line(fd);
// 		if (!felipes)
// 			break ;
// 		printf("%s", felipes);
// 		free(felipes);
// 	}
// 	printf("\n");
// 	while (1)
// 	{
// 		felipes = get_next_line(fd2);
// 		if (!felipes)
// 			break ;
// 		printf("%s", felipes);
// 		free(felipes);
// 	}
// 	return (0);
// }
