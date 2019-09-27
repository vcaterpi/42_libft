/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:05:12 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/09/19 04:05:20 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (dst[i])
		i++;
	while (*src)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = *src;
	return (dst);
}
