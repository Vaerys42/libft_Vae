/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:07:45 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/21 17:08:24 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_nbrlen(int i)
{
	int		len;

	len = 0;
	if (i < 0)
	{
		i = -i;
		len++;
	}
	while (i > 9)
	{
		i = i / 10;
		len++;
	}
	len++;
	return (len);
}

static int	ft_power(int i, int pwr)
{
	while (pwr != 1)
	{
		i = i * i;
		pwr--;
	}
	return (i);
}

static char	*ft_intmin(void)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * 12);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char		*ft_itoa(int i)
{
	char	*new;
	int		j;
	int		pwr;

	j = 0;
	if (i == -2147483648)
		return (ft_intmin());
	if (i == 2147483647)
		return ("2147483647");
	new = (char*)malloc(sizeof(char) * (ft_nbrlen(i) + 1));
	if (new == NULL)
		return (NULL);
	pwr = ft_nbrlen(i) - 1;
	if (i < 0)
	{
		new[j] = '-';
		j++;
		i = -i;
		pwr--;
	}
	while (pwr >= 1)
	{
		new[j] = ((i / ft_power(10, pwr)) % 10) + 48;
		j++;
		pwr--;
	}
	new[j] = (i % 10) + 48;
	new[j + 1] = '\0';
	return (new);
}
