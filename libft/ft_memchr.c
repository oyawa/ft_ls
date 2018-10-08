/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:29:26 by oyawa             #+#    #+#             */
/*   Updated: 2018/09/17 12:29:27 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*s_ptr;

	if (!s)
		return (NULL);
	ch = (unsigned char)c;
	s_ptr = (unsigned char*)s;
	while (n)
	{
		if (*s_ptr == ch)
			return ((void*)s_ptr);
		s_ptr++;
		n--;
	}
	return (NULL);
}
