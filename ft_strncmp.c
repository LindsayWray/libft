/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 13:07:54 by lwray         #+#    #+#                 */
/*   Updated: 2020/12/11 17:31:25 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	if (n == 0)
		return (0);
	count = 0;
	while (*s1 == *s2 && *s1 != '\0' && count < (n - 1))
	{
		s1++;
		s2++;
		count++;
	}
	return (*s1 - *s2);
}
