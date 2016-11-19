/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:09:51 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/13 10:59:26 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	unsigned int	l1;
	unsigned int	l2;
	int				c1;
	int				c2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (n > l1 || n > l2)
		return (0);
	i = 0;
	c1 = 0;
	c2 = 0;
	while (s1[i] != '\0' || s2[i] != '\0' || i < n)
	{
		c1 = c1 + s1[i];
		c2 = c2 + s2[i];
		i++;
	}
	if (c1 == c2)
		return (1);
	return (0);
}
