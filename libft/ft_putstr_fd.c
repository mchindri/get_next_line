/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchindri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 11:13:55 by mchindri          #+#    #+#             */
/*   Updated: 2016/01/14 19:53:39 by mchindri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putstr_fd(char const *s, int fd)
{
	char	*p;
	size_t	size;

	p = (char *)s;
	size = ft_strlen(s);
	write(fd, p, ft_strlen(s));
}
