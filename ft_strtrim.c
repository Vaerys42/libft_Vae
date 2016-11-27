/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:43:49 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/21 10:59:55 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_end(const char *str)
{
	int		i;

	i = ft_strlen(str) - 1;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && i != 0)
		i--;
	return (i);
}

static int		ft_start(const char *str)
{
	int		begin;

	begin = 0;
	while (str[begin] == ' ' || str[begin] == '\t' || str[begin] == '\n')
		begin++;
	return (begin);
}

char			*ft_strtrim(const char *s)
{
	char	*str;
	int		i;
	int		j;
	int		begin;
	char	*new;

	str = (char*)s;
	j = 0;
	i = ft_end(s);
	if (i == 0)
		return ("");
	begin = ft_start(s);
	while ((begin + j) != (i + 1))
		j++;
	new = (char*)malloc(sizeof(char) * (j + 1));
	if (new == NULL)
		return (NULL);
	j = 0;
	while ((begin + j) != (i + 1))
	{
		new[j] = str[begin + j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
