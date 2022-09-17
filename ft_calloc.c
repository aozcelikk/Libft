/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:49:39 by aozcelik          #+#    #+#             */
/*   Updated: 2022/01/05 11:17:06 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*nkt;

	nkt = malloc(count * size);
	if (nkt == NULL)
		return (NULL);
	ft_bzero(nkt, size * count);
	return (nkt);
}
