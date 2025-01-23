/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:44:37 by mgrandia          #+#    #+#             */
/*   Updated: 2025/01/02 17:35:57 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	int		i;

	len_dest = (size_t)ft_strlen(dest);
	i = 0;
	if (size <= len_dest)
		return ((size_t)ft_strlen(src) + size);
	while (size - 1 > len_dest + i)
	{
		dest[len_dest + i] = src[i];
		i ++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + ft_strlen(src));
}
