/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:29:38 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/24 13:33:14 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd(t_list **h_node, t_list *new_node)
{
	new_node->next = *h_node;
	*h_node = new_node;
}
