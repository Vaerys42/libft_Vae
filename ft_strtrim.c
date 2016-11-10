/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:34:13 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/10 10:51:44 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char *s)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len] != '\0')
		len++;
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	new = (char*)malloc(sizeof(char) * (len - i + 1));
	if (new == NULL)
		return (NULL);
	while (i < len)
	{
		new[j] = s[i];
		j++;
		i++;
	}
	new[j] = '\0';
	return (new);
}
