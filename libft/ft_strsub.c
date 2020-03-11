/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:12:54 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 20:06:29 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	if (len + 1 == 0)
		return (NULL);
	i = 0;
	if (!s || !(strsub = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i += 1;
	}
	strsub[i] = '\0';
	return (strsub);
}
