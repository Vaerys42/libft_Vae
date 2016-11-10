/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:50:45 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/10 11:14:21 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int i;
	unsigned int diff;

	i = 0;
	diff = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n)
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}
