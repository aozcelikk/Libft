/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:08:35 by aozcelik          #+#    #+#             */
/*   Updated: 2022/01/10 19:47:21 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*result;
	size_t	i;
	size_t	size;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return ((char *)ft_calloc(1, 1));
	size = ft_strlen(s);
	if (size < len)
		len = size;
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
