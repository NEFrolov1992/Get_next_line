/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:33:10 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/17 18:45:16 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*val;
	int		i;

	val = NULL;
	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i] != '\0')
		i++;
	val = (char *)malloc(sizeof(char) * i + 1);
	if (val == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		val[i] = f(s[i]);
		i++;
	}
	val[i] = '\0';
	return (val);
}
