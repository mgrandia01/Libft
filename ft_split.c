/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:24:37 by mgrandia          #+#    #+#             */
/*   Updated: 2025/01/12 17:47:36 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	count;
	int	in_word;
	int	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count ++;
		}
		i ++;
	}
	return (count);
}

char	**ft_split_free(char **ptr)
{
	int	i;

	if (!ptr)
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		free (ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	*ft_strword(char const *s, int i, int first)
{
	int		k;
	char	*word;

	word = (char *)malloc((i - first + 1) * sizeof(char));
	if (!word)
		return (NULL);
	k = first;
	while (k < i)
	{
		word[k - first] = s[k];
		k ++;
	}
	word[k - first] = '\0';
	return (word);
}

char	**ft_fillstr(char const *s, char c, char **ptr, int i)
{
	int		first;
	int		word;

	first = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			if (i > first)
			{
				if (s[i] != c && s[i + 1] == '\0')
					i++;
				ptr[word] = ft_strword(s, i, first);
				if (!ptr[word])
					return (ft_split_free(ptr));
				word ++;
				if (s[i - 1] != c && s[i] == '\0') //perque no sumi dos vegades i al final i dongui error
					i--;
			}
			else if (s[i] != c && s[i + 1] == '\0' && s[i - 1] == c)
			{
				ptr[word] = ft_strword(s, i + 1, first);
				if (!ptr[word])
					return (ft_split_free(ptr));
				word ++;
			}
			first = i + 1;
		}
		i ++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	
	ptr = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ft_fillstr(s,c,ptr,0);
	ptr[ft_countwords(s,c)] = NULL;
	return (ptr);
}
