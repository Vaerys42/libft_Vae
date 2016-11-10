/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:22:54 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/07 18:46:53 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	unsigned int	i;
	unsigned int	nbr1;
	unsigned int	nbr2;

	i = 0;
	nbr1 = 0;
	nbr2 = 0;
	src1 = s1;
	src2 = s2;
	while (i < n)
	{
		nbr1 = nbr1 + src1[i];
		nbr2 = nbr2 + src2[i];
		i++;
	}
	return (nbr1 - nbr2);
}
