/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 15:00:43 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 19:43:49 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char*)src)[i] == c)
		{
			((char*)dst)[i] = ((char*)src)[i];
			return (dst + (i + 1));
		}
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (0);
}
