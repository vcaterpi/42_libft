/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:55:31 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/09/25 19:30:12 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char*)buf;
	i = 0;
	while (i < count)
		ptr[i++] = ch;
	return (buf);
}
