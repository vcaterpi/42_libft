/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 01:09:00 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/09/25 19:42:00 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_skipdelim(char const *str, int *i, char c)
{
	while (str[*i] == c)
		(*i)++;
}

static int		ft_findmaxword(char const *str, char c)
{
	int max_word;
	int cur_word;
	int i;

	i = -1;
	max_word = 0;
	while (str[++i])
	{
		ft_skipdelim(str, &i, c);
		cur_word = 0;
		while (str[i] != c && str[i++])
			cur_word++;
		if (cur_word > max_word)
			max_word = cur_word;
		i--;
		if (!str[i])
			break ;
	}
	return (max_word);
}

static int		ft_wordcount(char const *str, char c)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i])
		if (str[i] != c && (str[i + 1] == c || !str[i + 1]))
			count++;
	return (count);
}

static void		ft_fillarray(char **result, char const *str, char c)
{
	int k;
	int j;
	int i;

	i = -1;
	k = 0;
	j = 0;
	while (str[++i])
	{
		ft_skipdelim(str, &i, c);
		k = 0;
		while (str[i] != c && str[i])
			result[j][k++] = str[i++];
		result[j++][k] = '\0';
		if (!str[i] || !result[j])
			break ;
	}
}

char			**ft_strsplit(char const *str, char c)
{
	int		i;
	char	**result;
	int		nwords;
	int		wordlen;

	if (!str)
		return (NULL);
	i = -1;
	nwords = ft_wordcount(str, c);
	wordlen = ft_findmaxword(str, c);
	if (!(result = (char**)malloc(sizeof(char*) * (nwords + 1))))
		return (NULL);
	while (++i < nwords)
		if (!(result[i] = (char*)malloc(sizeof(char) * (wordlen + 1))))
			return (NULL);
	if (!nwords)
	{
		result[0] = NULL;
		return (result);
	}
	result[i] = NULL;
	ft_fillarray(result, str, c);
	return (result);
}
