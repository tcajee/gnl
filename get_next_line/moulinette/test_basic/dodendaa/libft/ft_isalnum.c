/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:07:27 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/24 09:29:27 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) \
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}