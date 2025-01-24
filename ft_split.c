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

void	ft_split_free(char **ptr)
{
	int	i;

	if (!ptr)
		return ;
	i = 0;

	while (ptr[i])
	{
		free (ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int	i;
	int	first;
	int 	word;
	int	k;

	ptr = (char **)malloc((ft_countwords(s,c)+1)*sizeof(char *));
	if (!ptr)
	{
		free (ptr);
		return (NULL);
	}
	i = 0;
	first = 0;
	word = 0;
	k = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c || s[i+1] == '\0')
		{
			if (i > first)
			{
				if (s[i] != c && s[i+1] == '\0')
					i++;
				ptr[word] = (char *)malloc(( i - first +1)*sizeof(char));//sizeof -last
				if (!ptr[word])
				{
					ft_split_free(ptr);
					return (NULL);
				}
				k = first;
				while (k < i)
				{
					ptr[word][k - first] = s[k];
					k ++;
				}
				ptr[word][k-first] = '\0';
				word ++;
				if (s[i-1] != c && s[i] == '\0')//perque no sumi dos vegades i al final i dongui error
					i--;

			}
			else if (s[i] != c && s[i+1] == '\0' && s[i-1] == c)
			{
			  i++;	
				ptr[word] = (char *)malloc(( i - first +1)*sizeof(char));
				k = first;
				while (k < i)
				{
					ptr[word][k - first] = s[k];
					k ++;
				}
				ptr[word][i-first] = '\0';
				word ++;
				i--;
			}
			first = i+1;	
		}
		i ++;
	}
	ptr[word] = NULL;
	return (ptr);
}
