/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:08:29 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/17 18:18:15 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ar;

	ar = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (ar[i] == (unsigned char)c)
		{
			return (&ar[i]);
		}
		i++;
	}
	return (NULL);
}
