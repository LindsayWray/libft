/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lwray <lwray@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 13:12:45 by lwray         #+#    #+#                 */
/*   Updated: 2020/11/05 14:21:38 by lwray         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int i;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	res = res * sign;
	return (res);
}
