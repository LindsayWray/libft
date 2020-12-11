/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 18:41:10 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 18:46:58 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	ret_char;
	char	*ret_str;
	int		i;

	ret_str = (char *)malloc(ft_strlen((char *)s) + 1);
	i = 0;
	while (s[i] != '\0')
	{
		ret_char = f(i, s[i]);
		ret_str[i] = ret_char;
		i++;
	}
	return (ret_str);
}
