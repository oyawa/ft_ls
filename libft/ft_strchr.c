/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:50:09 by oyawa             #+#    #+#             */
/*   Updated: 2018/09/17 15:56:06 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pt;
	char	locate;

	locate = c;
	pt = (char*)s;
	while (*pt)
	{
		if (*pt == locate)
			return (pt);
		pt++;
	}
	if (*pt == locate)
		return (pt);
	else
		return (NULL);
}
