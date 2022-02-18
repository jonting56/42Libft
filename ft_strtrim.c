/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:28:19 by jting             #+#    #+#             */
/*   Updated: 2022/02/16 11:33:11 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (len != 0)
	{
		while (ft_strchr(set, s1[start + len - 1]) && s1[start + len - 1])
			len--;
	}
	return (ft_substr(s1, start, len));
}
