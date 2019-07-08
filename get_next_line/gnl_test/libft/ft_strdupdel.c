/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:02:44 by vesingh           #+#    #+#             */
/*   Updated: 2019/06/26 13:51:58 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupdel(char **str)
{
	char	*tmp;

	tmp = ft_strdup(*str);
	ft_strdel(str);
	return (tmp);
}
