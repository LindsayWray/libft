/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 19:04:57 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 18:48:44 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*trim;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	len = ft_strlen((char *)s1);
	while (len > 0)
	{
		if (!ft_strchr(set, s1[len - 1]))
			break ;
		len--;
	}
	trim = ft_substr(s1, i, len - i);
	return (trim);
}
