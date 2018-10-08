/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:19:06 by oyawa             #+#    #+#             */
/*   Updated: 2018/09/17 12:19:07 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	lst_add_end(t_files **head, t_files *new)
{
	t_files		*tmp;

	if (!(*head))
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

void	lst_insert_after(t_files *target, char *new)
{
	t_files	*new_dir;

	new_dir = (t_files *)ft_memalloc(sizeof(t_files));
	new_dir->name = ft_strdup(new);
	new_dir->next = target->next;
	target->next = new_dir;
}

t_files	*lst_copy_link(t_files *link)
{
	t_files	*copy;

	copy = (t_files *)ft_memalloc(sizeof(t_files));
	copy = (t_files *)ft_memcpy(copy, link, sizeof(t_files));
	return (copy);
}

void	concat_list(t_files *target, t_files *new)
{
	t_files	*tmp;

	tmp = target->next;
	target->next = new;
	while (new->next)
		new = new->next;
	new->next = tmp;
}
