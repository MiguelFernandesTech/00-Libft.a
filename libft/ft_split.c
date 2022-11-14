/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:24:57 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 15:02:23 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	slen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			ret++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (slen(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}
/*
#include <stdio.h>
int main()
{
    char    *texto = "sp lit mui to      fic il fd s";
    char    delimiter = ' ';
    char    **array;
    int     size;
    int     i;
    i = 0;
    size = 8;
    //size = arraysize(texto, delimiter) + 1;
    array = ft_split(texto, delimiter);
    while(i <= size)
    {
        printf("%s\n", array[i++]);
    }
    return(0);
}
*/
