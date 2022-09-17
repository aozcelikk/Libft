/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:33:54 by aozcelik          #+#    #+#             */
/*   Updated: 2022/01/10 15:26:55 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ylst;
	t_list	*lm;

	if (!lst)
		return (0);
	ylst = 0;
	while (lst)
	{
		lm = ft_lstnew(f(lst->content));
		if (!lm)
		{
			ft_lstclear(&ylst, del);
			return (0);
		}
		ft_lstadd_back(&ylst, lm);
		lst = lst->next;
	}
	return (ylst);
}
