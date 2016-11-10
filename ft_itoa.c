/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:31:13 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/08 17:53:35 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_aff(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

static int		ft_len(int n)
{
	int		len;

	len = 1;
	while (n > 10)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*nptr;
	int		len;
	int		neg;
	int		i;

	neg = 0;
	i = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	len = ft_len(n);
	nptr = (char*)malloc(sizeof(char) * (len + 1));
	if (nptr == NULL)
		return (NULL);
	if (neg == 1)
	{
		nptr[i] = '-';
		i++;
	}
	while (len != 0)
	{
		nptr[i] = () + 48;
		i++;
		len--;
	}
	nptr[i] = '\0';
	ft_aff(nptr);
	return (nptr);
}

int		main(void)
{
	ft_itoa(-42);
	return (0);
}
