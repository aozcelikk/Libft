/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:02:45 by aozcelik          #+#    #+#             */
/*   Updated: 2022/01/05 19:38:07 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		while (haystack[a + b] == needle[b] && (a + b) < len)
		{
			if (haystack[a + b] == '\0' && needle[b] == '\0')
				return ((char *)&haystack[a]);
			b++;
		}
		if (needle[b] == '\0')
			return ((char *)haystack + a);
		a++;
	}
	return (0);
}
