/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchindri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 15:04:17 by mchindri          #+#    #+#             */
/*   Updated: 2016/01/15 09:50:58 by mchindri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 9
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct	s_buf
{
	int		fd;
	char	*buf;
}				t_buf;

int				get_next_line(int const fd, char **line);

#endif
