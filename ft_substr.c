/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:51:45 by mgrandia          #+#    #+#             */
/*   Updated: 2025/01/21 17:59:16 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) - start < len)
	{
		ptr = (char *)malloc(((ft_strlen(s)) - start + 1) * sizeof (char));
		len = ft_strlen(s) - start;
	}
	else
		ptr = (char *)malloc((len + 1) * sizeof (char));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		ptr[i] = s[start + i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}
