/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:16:48 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/09/19 04:05:30 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t slen;
	size_t i;

	slen = ft_strlen(src);
	i = 0;
	while (src[i] && (i < n))
	{
		dst[i] = src[i];
		i++;
	}
	if (n > slen)
	{
		while (i < n)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
