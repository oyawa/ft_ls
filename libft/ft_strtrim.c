/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:57:08 by oyawa             #+#    #+#             */
/*   Updated: 2018/09/17 15:57:09 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		end;
	int		length;
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if ((end = ft_strlen(s) - 1) == 0)
		return (new = ft_strnew(0));
	while (end > 0 && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		end--;
	length = end + 1;
	if (!(new = (char*)malloc(length + 1)))
		return (NULL);
	i = 0;
	while (length)
	{
		length--;
		new[i++] = *s++;
	}
	new[i] = '\0';
	return (new);
}
