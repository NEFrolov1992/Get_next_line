/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:45:47 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 21:33:35 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*cc;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if ((cc = ft_memchr(src, c, n)))
	{
		ft_memcpy(dst, src, (size_t)(cc - s + 1));
		return ((d + (size_t)(cc - s + 1)));
	}
	else
		ft_memcpy(dst, src, n);
	return (NULL);
}
