/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:41:42 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/22 11:10:21 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int	ft_size(const char *s, char c)
{
	int		a;
	int		j;
	int		k;

	j = 0;
	k = 0;
	a = 0;
	while (s[a] != '\0')
	{
		while (s[a] == c)
		{
			j++;
			a++;
		}
		if (s[a - 1] == c)
			k++;
		a++;
		k++;
	}
	return (a - j + k);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**new;
	int		i;
	int		j;
	char	*tmp;
	int		count;

	i = 0;
	j = 0;
	new = (char**)malloc(sizeof(char) * ft_size(s, c));
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		count = 0;
		while (s[i] == c)
			i++;
		while (s[i + count] != c && s[i + count] != '\0')
			count++;
		tmp = (char*)malloc(sizeof(char) * (count + 1));
		if (tmp == NULL)
			return (NULL);
		count = 0;
		while (s[i] != c && s[i] != '\0')
		{
			tmp[count] = s[i];
			i++;
			count++;
		}
		tmp[count] = '\0';
		new[j] = tmp;
		j++;
		free(tmp);
	}
	new[j] = NULL;
	return (new);
}

int			main()
{
	char	**test;

	test = ft_strsplit("olol", ' ');
	printf("%s", test[0]);
	return (0);
}
