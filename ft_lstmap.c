/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 19:31:28 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 18:04:31 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elm;
	t_list	*first;

	if (lst == NULL)
		return (NULL);
	first = ft_lstnew(f(lst->content));
	if (first == NULL)
	{
		ft_lstclear(&first, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		new_elm = ft_lstnew(f(lst->content));
		if (new_elm == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new_elm);
		lst = lst->next;
	}
	return (first);
}
