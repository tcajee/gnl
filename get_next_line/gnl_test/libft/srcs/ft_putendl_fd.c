/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anorman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:31:32 by anorman           #+#    #+#             */
/*   Updated: 2019/05/31 11:09:14 by anorman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int	cnt;

	cnt = 0;
	if (s)
	{
		while (s[cnt])
		{
			write(fd, &s[cnt], 1);
			cnt++;
		}
	}
	write(fd, "\n", 1);
}
