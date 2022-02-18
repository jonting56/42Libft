/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:45:58 by jting             #+#    #+#             */
/*   Updated: 2022/02/18 15:57:32 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i + 1] == c || s[i + 1] == '\0')
		   words++;
		i++;
	}
	return (words);
}	

static	int	ft_len(char const *s, c)
{
	int	i;
	int	len;

	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
		i++;
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;
	int		end;

	dst = malloc(sizeof(*s) * (ft_wordcount((char *)s, c) + 1));
	if (!dst)
		return (dst);
	i = 0;
	while (i < ft_wordcount((char *)s, c))
	{
			dst[i] = malloc(sizeof(char) * (ft_len(s, c) + 1));
			if (!dst[i])
				return (NULL);
			end = ft_chars(s, c);

