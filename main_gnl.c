/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:49:16 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/06 16:09:22 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int	open(const char *path, int flags)

// ssize_t	read(int fildes, void *buf, size_t nbytes)



int	main()
{
	int	fd;
	
	fd = open("my_text", O_RDONLY);
	char buff[100];
	read(fd, buff, 80);
	printf("%s\n", buff);
	
	return (fd);
}