/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:22:11 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/17 20:13:41 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s;
	int		t;
	char	*val;

	i = 0;
	j = 0;
	s = 0;
	t = 0;
	val = NULL;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (!(val = (char *)malloc(sizeof(char) * (i + j) + 1)))
		return (NULL);
	while (s < i)
		val[s++] = *s1++;
	while (s < (j + i))
		val[s++] = s2[t++];
	val[s] = '\0';
	return (val);
}
