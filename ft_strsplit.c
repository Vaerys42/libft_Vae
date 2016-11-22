/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:41:42 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/21 17:43:26 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    **ft_strsplit(const char *s, char c)
{
	char    **new;
	int     i;
	int     j;
	char    *tmp;
	int     count;

	i = 0;
	j = 0;
	new = NULL;
	while (s[i] != '\0')
	{
		count = 0;
		while (s[i] == c)
			i++;
		while (s[i + count] != c)
			count++;
		tmp = (char*)malloc(sizeof(char) * (count + 1));
		count = 0;
		while (s[i] != c)
		{
			tmp[count] = s[i];
			i++;
			count++;
		}
		new[j] = tmp;
		j++;
		free(tmp);
		tmp = NULL;
	}
	return (new);
}
