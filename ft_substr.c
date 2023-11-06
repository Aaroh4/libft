/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:56:39 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/06 12:20:18 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < (int)len)
		len = ft_strlen(s + start);
	ret = malloc(len + 1);
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
