/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:49:39 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/15 19:44:33 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*str;

	str = (char*)haystack;
	i = 0;
	if (!*needle)
		return (str);
	while (str[i])
	{
		j = 0;
		while (needle[j] == str[i + j])
		{
			if (!(needle[j + 1]))
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
