/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:16:25 by aozcelik          #+#    #+#             */
/*   Updated: 2022/01/09 18:18:45 by cool             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*nkt;
	unsigned int	a;

	nkt = ft_strdup(s);
	if (!s || !f || !nkt)
		return (0);
	a = 0;
	while (nkt[a])
	{
		nkt[a] = f(a, nkt[a]);
		a++;
	}
	return (nkt);
}
