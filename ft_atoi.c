/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:31:09 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/06 12:40:59 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	ret;
	int	neg;

	i = 0;
	neg = 1;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	return (ret * neg);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("-2"));
}*/
