/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:05:13 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/09/25 22:31:16 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(new->content = malloc(content_size)))
		return (NULL);
	new->content = (!content ? NULL :
		ft_memcpy(new->content, content, content_size));
	new->content_size = (!content ? 0 : content_size);
	new->next = NULL;
	return (new);
}
