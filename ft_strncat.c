/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:43:58 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/09/19 04:05:26 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	char str2_new[n + 1];

	ft_strncpy(str2_new, str2, n);
	str2_new[n] = '\0';
	return (ft_strcat(str1, str2_new));
}
