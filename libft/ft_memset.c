/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:32:44 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/15 19:15:08 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*tmp_ptr;
	unsigned char	tmp_char;

	tmp_char = (unsigned char)c;
	tmp_ptr = (char *)b;
	i = 0;
	if (!len)
		return (b);
	else
	{
		while (i < len)
		{
			tmp_ptr[i] = tmp_char;
			i++;
		}
		return (b);
	}
}
