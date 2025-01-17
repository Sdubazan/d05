/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:44:40 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 12:46:58 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
	int i;
	int upper;

	i = 0;
	up = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (up && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			else if (!up && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] = str[i] + 32;
			}
			up = 0;
		}
		else
			up = 1;
		i++;
	}
	return (str);
}
