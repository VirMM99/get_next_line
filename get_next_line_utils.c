/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:14:10 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/13 19:58:36 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *s1)
{
	char	*s2;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	i;
	size_t	len1;
	size_t	len2;
	
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[i - len1])
	{
		s3[i] = s2[i - len1];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
char	*ft_substr(char *s, size_t start, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (start >= ft_strlen(s))
	{
		s = (malloc((sizeof(char)) * 1));
		if(s != NULL)
			s[0] = '\0';
		return s;
	}
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc((sizeof(char)) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
char	*ft_strchr(char *s, char c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}


