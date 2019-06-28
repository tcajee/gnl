/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:01:37 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/27 16:12:18 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	FT_(fd < 0, )
	if (n < 0)
	{
		FT_(n == -2147483648, ft_putstr_fd("-2147483648", fd))
		else
			ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (ft_isdigit(n + 48))
		ft_putchar_fd(n + 48, fd);
}
