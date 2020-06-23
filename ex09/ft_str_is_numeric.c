/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:51:01 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 12:51:31 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= '0' && str[0] <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
