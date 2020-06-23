/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:24:28 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 13:27:31 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

 void ft_print_hexa(char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_putchar(n / 10);
		ft_putchar(np % 10);
	}
	else
	{
		ft_putchar(hex[np]);
	}
}

void ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
}
