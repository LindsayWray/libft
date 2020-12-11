/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 15:56:18 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 17:27:46 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((i + j) < (dstsize - 1) && src[j] != '\0' && dstsize > 0)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[j] != '\0')
	{
		j++;
	}
	if (dstsize < i)
	{
		return (dstsize + j);
	}
	return (i + j);
}
