/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:45:47 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/07 13:59:27 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	i = i + j + 1;
	new = (char*)malloc(sizeof(char) * i);
	if (new == NULL)
		return (new);
	j = 0;
	while (s1[j] != '\0')
	{
		new[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[j] = s2[i];
		j++;
		i++;
	}
	new[j] = '\0';
	return (new);
}
