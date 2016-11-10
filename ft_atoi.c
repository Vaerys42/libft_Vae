/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:15:37 by kboucaud          #+#    #+#             */
/*   Updated: 2016/11/08 12:30:34 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *nptr)
{
	int		nbr;
	int		i;
	int		neg;

	nbr = 0;
	i = 0;
	neg = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '-')
		neg = 1;
	while (nptr[i] != '\0' && nptr[i] > 47 && nptr[i] < 58)
	{
		nbr = nbr * 10;
		nbr = nptr[i] + 48;
		i++;
	}
	if (neg == 1)
		nbr = -nbr;
	return (nbr);
}
