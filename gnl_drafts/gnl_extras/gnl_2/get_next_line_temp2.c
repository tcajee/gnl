/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:15:46 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/26 11:31:39 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	find_new_line(int fd, char **files)
{
	char	*store;
	int		bytes;
	char	buffer[BUFF_SIZE + 1];

	if (!files[fd])
		files[fd] = ft_strnew(0);
	while (ft_strchr(files[fd], '\n') == NULL)
	{
		if ((bytes = read(fd, buffer, BUFF_SIZE)) == 0)
			break ;
		if (bytes < 0)
			return (-1);
		buffer[bytes] = '\0';
		store = ft_strjoin(files[fd], buffer);
		ft_strdel(&files[fd]);
		files[fd] = ft_strdup(store);
		ft_strdel(&store);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*files[1024];
	char		*copy;
	char		*next;

	if (fd < 0 || !line || find_new_line(fd, files) < 0)
		return (-1);
	if (ft_strchr(files[fd], '\n') != NULL)
	{
		copy = ft_strdup(files[fd]);
		ft_strdel(&files[fd]);
		next = ft_memset(ft_strchr(copy, '\n'), '\0', 1) + 1;
		*line = ft_strdup(copy);
		files[fd] = ft_strdup(next);
		ft_strdel(&copy);
	}
	else if (ft_strlen(files[fd]) > 0)
	{
		*line = ft_strdup(files[fd]);
		ft_strdel(&files[fd]);
	}
	else
		return (0);
	return (1);
}
