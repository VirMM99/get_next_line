/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:32 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/14 17:10:04 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# define MAX_FD 1024

				//Inclusiones necesarias
# include <stdlib.h> //MALLOC
# include <unistd.h> //Write, READ
# include <fcntl.h>//open
// # include <string.h> //SIZE_T
// # include <limits.h> //INT_MIN.
// #include <sys/types.h>//open
// #include <sys/stat.h>//open
// #include <stdio.h>//printf

								// Declaracion de funciones
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, size_t start, size_t len);
size_t	ft_strlen(char *s);
char	*ft_strdup(char *s1);
char	*ft_strchr(char *s, char c);

#endif