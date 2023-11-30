/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaaraba <aaaraba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:29:38 by aaaraba           #+#    #+#             */
/*   Updated: 2023/11/29 17:03:55 by aaaraba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main ()
{
	int i = 1028;
	// char *s = ft_itoa(i);
	printf("%ld", ft_strlen(&i));
}
//  000000000 0000000 00000100 00000100