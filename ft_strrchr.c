/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:30:59 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/20 16:49:47 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char*)s;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if (str[i] == (unsigned char)c)
		j = i;
	if (j != 0)
		return (&str[j]);
	return (NULL);
}
