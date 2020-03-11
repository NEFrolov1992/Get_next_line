/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:10:36 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 20:31:22 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	ret = NULL;
	if (lst && f)
	{
		ret = (t_list*)malloc(sizeof(t_list*));
		if (ret == NULL)
			return (NULL);
		ret = f(lst);
		if (lst->next)
		{
			ret->next = ft_lstmap(lst->next, f);
			if (ret->next == NULL)
			{
				free(ret);
				ret = NULL;
			}
		}
	}
	return (ret);
}
