/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:56:39 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/10 12:55:24 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	sub_len;

	while (*s && start--)
		s++;
	sub_len = 0;
	while (s[sub_len])
		sub_len++;
	if (sub_len < len)
		len = sub_len;
	ret = malloc(len + 1);
	if (!ret)
		return (0);
	ret[len] = '\0';
	while (len--)
		ret[len] = s[len];
	return (ret);
}
/*
#include <stdio.h>
int main(void)
{
  //printf("%s", ft_substr("", 1, 1));
  char *str = ft_substr("", 1, 1);
  printf("%s", str);
}*/
