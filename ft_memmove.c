/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 16:01:28 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 19:36:53 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*ptrd;
	const char	*ptrs;
	size_t		i;

	ptrd = dst;
	ptrs = src;
	i = 0;
	if (ptrd < ptrs)
	{
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			ptrd[n - 1] = ptrs[n - 1];
			n--;
		}
	}
	return (dst);
}
