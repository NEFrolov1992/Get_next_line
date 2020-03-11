/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:19:13 by gmentat           #+#    #+#             */
/*   Updated: 2019/09/18 20:12:06 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		(*i)++;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		(*i)++;
	return (s);
}

static void		*ft_clear(char **s, int i)
{
	while (--i >= 0)
	{
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
	s = NULL;
	return (s);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**s;

	i = 0;
	j = 0;
	if (!str && !c)
		return (NULL);
	if (str == 0 || c == 0)
		return (NULL);
	wrd = ft_count_words(str, c);
	if (!(s = (char **)malloc(sizeof(s) * (wrd + 1))))
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < wrd && str[i])
	{
		s[j] = ft_word(str, c, &i);
		if (s[j] == NULL)
			return (ft_clear(s, j));
		j++;
	}
	s[j] = NULL;
	return (s);
}
