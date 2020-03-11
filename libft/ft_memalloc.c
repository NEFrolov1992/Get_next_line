/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:51:08 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/14 14:26:04 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*str;
	char	*p;
	size_t	i;

	i = 0;
	str = (void*)malloc(sizeof(void*) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	p = (char*)str;
	while (i < size)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
