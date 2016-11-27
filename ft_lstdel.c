/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:43:38 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/26 17:43:39 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void			ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	while (alst->next != NULL)
	{
		(*del)(alst->content, alst->content_size);
		ft_memdel(**alst);
		alst = alst->next;
	}
}