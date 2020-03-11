/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:30:30 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 21:08:19 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (*ss1 && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
	}
	return (*ss1 - *ss2);
}
