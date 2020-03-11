/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:38:24 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 19:48:55 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	if (size + 1 == 0)
		return (NULL);
	i = 0;
	str = NULL;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
	{
		return (str);
	}
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
