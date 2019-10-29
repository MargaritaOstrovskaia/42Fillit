/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:31:47 by mostrovs          #+#    #+#             */
/*   Updated: 2019/10/08 13:36:32 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_line(const int fd, char **files, char **line)
{
	int		len;
	char	*str;

	len = 0;
	while (files[fd][len] != '\n' && files[fd][len] != '\0')
		len++;
	*line = ft_strsub(files[fd], 0, len);
	if (files[fd][len] == '\n')
	{
		str = ft_strdup(&files[fd][len + 1]);
		free(files[fd]);
		files[fd] = str;
		if (files[fd][0] == '\0')
			ft_strdel(&files[fd]);
	}
	else
		ft_strdel(&files[fd]);
}

static void	read_next(const int fd, char **files, char *buff)
{
	char	*str;

	if (!files[fd])
		files[fd] = ft_strnew(1);
	str = ft_strjoin(files[fd], buff);
	free(files[fd]);
	files[fd] = str;
}

int			get_next_line(const int fd, char **line)
{
	static char	*files[FD_SIZE];
	char		buff[BUFF_SIZE + 1];
	int			res;

	if (fd < 0 || !line)
		return (-1);
	while ((res = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[res] = '\0';
		read_next(fd, files, buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (res < 0)
		return (-1);
	if (res == 0 && files[fd] == NULL)
		return (0);
	get_line(fd, files, line);
	return (1);
}
