/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:56:44 by oyawa             #+#    #+#             */
/*   Updated: 2018/09/17 15:56:46 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		size_s2;

	i = 0;
	j = 0;
	size_s2 = ft_strlen(s2);
	if (size_s2 == 0)
		return ((char*)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j])
		{
			if (j == size_s2 - 1)
				return ((char*)(s1 + i));
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
