/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 09:18:38 by mbotes            #+#    #+#             */
/*   Updated: 2019/06/21 17:26:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t			len;
	unsigned int	start;
	unsigned int	end;
	char			*new;

	start = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (ft_strlen(s) == 0)
		return (ft_strnew(1));
	while (ft_iswhitespace(s[start]) == 1 && s[start] != '\0')
		start++;
	end = len - 1;
	while (ft_iswhitespace(s[end]) == 1 && end >= start)
		end--;
	len = end - start + 1;
	if (!(new = ft_strsub(s, start, len)))
		return (NULL);
	return (new);
}
