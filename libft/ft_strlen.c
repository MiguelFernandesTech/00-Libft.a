/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:54:50 by migmarti          #+#    #+#             */
/*   Updated: 2022/11/12 12:44:46 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}
/*
int main(int argc, char **argv)
{
	int i = 0;

	(void)argc;
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
*/
