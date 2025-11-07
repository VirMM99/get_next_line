/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:32 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/06 16:07:47 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

				//Inclusiones necesarias
# include <stdlib.h> //MALLOC
# include <unistd.h> //Write, READ
# include <string.h> //SIZE_T
# include <limits.h> //INT_MIN.
#include <sys/types.h>//open
#include <sys/stat.h>//open
#include <fcntl.h>//open
#include <stdio.h>//printf

								// Declaracion de funciones
char	*get_next_line(int fd);

#endif