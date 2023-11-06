/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:03:00 by ahamalai          #+#    #+#             */
/*   Updated: 2023/11/03 13:21:45 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_separator(char const *s, char c)
{

}

void	do_split(char **arr, char const *s, char *c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{

	}
}
int	wordcount(char const *s, char c)
{
	int	i;
	int	count;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**arr;

	count	= wordcount(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	arr[count] = 0;
	do_split(arr, s, c);
}
