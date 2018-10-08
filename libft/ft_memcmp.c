/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:29:37 by oyawa             #+#    #+#             */
/*   Updated: 2018/09/17 12:29:42 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1_ptr;
	const unsigned char *s2_ptr;
	size_t				i;

	if (!s1 || !s2 || n == 0)
		return (0);
	s1_ptr = s1;
	s2_ptr = s2;
	i = 0;
	while (s1_ptr[i] == s2_ptr[i] && (i + 1) < n)
		i++;
	return (s1_ptr[i] - s2_ptr[i]);
}
