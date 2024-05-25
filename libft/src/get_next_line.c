/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:09:06 by ziratya           #+#    #+#             */
/*   Updated: 2024/05/25 15:34:31 by ziratya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_stash(char *stash)
{
	int		i;
	char	*res;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	res = gnl_ft_substr(stash, i, gnl_ft_strlen(stash) - i + 1);
	free(stash);
	if (res[0] == 0)
	{
		free(res);
		res = NULL;
	}
	return (res);
}

char	*ft_get_line(char *stash)
{
	int		i;
	char	*res;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	res = gnl_ft_substr(stash, 0, i);
	return (res);
}

char	*ft_read(int fd, char *buffer, char *stash)
{
	int	read_value;

	read_value = 1;
	while (read_value > 0 && !gnl_ft_strchr(stash, '\n'))
	{
		read_value = read(fd, buffer, BUFFER_SIZE);
		if (read_value <= -1)
			return (free(buffer), free(stash), NULL);
		if (read_value > 0)
		{
			buffer[read_value] = '\0';
			stash = gnl_ft_strjoin(stash, buffer);
			if (!stash)
				return (free(buffer), NULL);
		}
	}
	return (free(buffer), stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (free(stash), stash = NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	stash = ft_read(fd, buffer, stash);
	line = ft_get_line(stash);
	stash = ft_stash(stash);
	return (line);
}
