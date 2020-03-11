/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:00:25 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 20:37:47 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int					f;
	unsigned long int	res;

	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			f = -1;
		str++;
		if (!(*str <= '9' && *str >= '0') && *str != '-')
			return (0);
	}
	while (*str <= '9' && *str >= '0')
	{
		res = res * 10 + *str - 48;
		str++;
		if (res > 9223372036854775807L && f == 1)
			return (-1);
		else if (res > 9223372036854775807L && f == -1)
			return (0);
	}
	return (f == -1 ? -res : res);
}
