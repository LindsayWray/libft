/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/11 18:09:47 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 18:10:40 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *element;

	element = (t_list *)malloc(sizeof(t_list));
	element->content = content;
	element->next = NULL;
	return (element);
}
