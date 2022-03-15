/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisner <aisner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:30:11 by aisner            #+#    #+#             */
/*   Updated: 2022/03/08 19:56:13 by aisner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t lenght)
{
	char		*dst;
	const char	*str;

	dst = dest;
	str = src;
	while (lenght)
	{
		*dst++ = *str++;
		lenght--;
	}
	return (dest);
}

static void	*ft_memcpy_rev(void *dest, const void *src, size_t lenght)
{
	char		*dst;
	const char	*str;

	dst = dest;
	str = src;
	while (lenght--)
		dst[lenght] = str[lenght];
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t lenght)
{
	if (dst <= src)
		return (ft_memcpy(dst, src, lenght));
	if (dst > src)
		return (ft_memcpy_rev(dst, src, lenght));
	return (dst);
}
