/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:52:32 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/17 19:09:34 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		while (i < n)
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (1);
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
