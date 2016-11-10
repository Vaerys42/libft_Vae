/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:30:59 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/10 12:33:39 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (c == '\0' && s[0] == '\0')
		return (&s[0]);
	if (s[0] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c != 0)
		return (&s[j]);
	return (NULL);
}
