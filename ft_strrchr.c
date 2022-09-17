/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:48:02 by aozcelik          #+#    #+#             */
/*   Updated: 2022/01/10 17:28:27 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	a;

	a = ft_strlen(s) + 1;
	while (a--)
		if (s[a] == (char)c)
			return ((char *)(s + a));
	return (0);
}
