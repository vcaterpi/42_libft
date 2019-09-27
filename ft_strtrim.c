/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 00:18:37 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/09/25 23:05:37 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t			i;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (!str[i])
		return (ft_strnew(0));
	start = i;
	while (str[i])
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i--;
	end = i + 1;
	return (ft_strsub(str, start, end - start));
}
