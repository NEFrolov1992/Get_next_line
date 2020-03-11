/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:57:26 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 19:32:58 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char val;
	long i;

	if (fd < 0)
		return ;
	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = i * (-1);
	}
	if (i >= 10)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putnbr_fd((i % 10), fd);
	}
	else
	{
		val = i + 48;
		write(fd, &val, 1);
	}
}
