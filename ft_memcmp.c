/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 14:56:42 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 17:16:29 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *ptr1;
	const char *ptr2;

	ptr1 = s1;
	ptr2 = s2;
	if (n == 0)
		return (0);
	while (*ptr1 == *ptr2 && n > 1)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return (*ptr1 - *ptr2);
}
