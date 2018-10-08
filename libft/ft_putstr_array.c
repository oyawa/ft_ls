/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 10:49:53 by oyawa             #+#    #+#             */
/*   Updated: 2018/09/21 10:49:55 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_array(char **array, char sep)
{
	int		i;

	i = 0;
	while (array[i])
	{
		ft_putstr(array[i]);
		if (array[i + 1] || sep == '\n')
			ft_putchar(sep);
		i++;
	}
}
