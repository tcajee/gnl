/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:03:32 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/17 11:25:41 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*start;
	const char	*end;
	char		*new;
	size_t		len;

	new = NULL;
	if (s)
	{
		len = 0;
		end = (s + (ft_strlen(s)));
		while (ft_iswhitespace(*s) == 1 && *s)
			s++;
		start = s;
		while (ft_iswhitespace(*(end - 1)) == 1 && end != s)
			end--;
		while (s++ != end)
			len++;
		if (!(new = ft_strsub(start, 0, len)))
			return (NULL);
	}
	return (new);
}
