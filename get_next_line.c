/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:56 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/13 20:00:46 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_read_this(char **stash, int fd)
{
	ssize_t	char_read;
	char	*temp;
	char *read_text;

	read_text = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (read_text == NULL)
		return (-1);
	char_read = 1;
	while (char_read > 0 && (!stash || !ft_strchr(*stash, '\n')))
	{
		char_read = read(fd, read_text, BUFFER_SIZE);
		if (char_read < 0)
		{
			free(read_text);
			return (-1);
		}
		read_text[char_read] = '\0';
		if (!*stash)
			temp = ft_strdup(read_text);
		else
			temp = ft_strjoin(*stash, read_text);
		if (!temp)
			return (-1);
		free(*stash);
		*stash = temp;
	}
	free(read_text);
	if (char_read == 0 && (!*stash || *stash[0] == '\0'))
		return (0);
	return (1);
}

void	ft_divide_text(char **stash, char **line, char **leftover)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (((*stash)[i] != '\0') && ((*stash)[i] != '\n'))
		i++;
	if ((*stash)[i] == '\n')
	{
		*line = ft_substr(*stash, 0, i + 1);
		len = ft_strlen(*stash) - (i + 1);
		*leftover = ft_substr(*stash, i + 1, len);
	}
	else
	{
		*line = ft_substr(*stash, 0, i);
		*leftover = NULL;
	}
	if (!*line)
	{
		free(*line);
		line = NULL;
	}
}

char *ft_get_the_line(char **stash)
{
	char	*leftover;
	char	*line;
	
	if (!stash || !*stash || !**stash)
	{
		if (!stash || !*stash)
		{
			free(*stash);
			*stash = NULL;
		}
		return (NULL);
	}
	else 
		ft_divide_text(stash, &line, &leftover);
	free(*stash);
	if (leftover && !*leftover)
	{
		free(leftover);
		leftover = NULL;
	}
	*stash = leftover;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	int			flag;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	flag = ft_read_this(&stash, fd);
	if(flag == -1 || !stash || !*stash) 
	{
		if(stash)
		{
			free(stash);
			stash = NULL;
		}
		return (NULL);
	}
	return (ft_get_the_line(&stash));
}
