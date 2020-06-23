/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:03:59 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 13:06:36 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		l;

	l = ft_strlen(dest) + ft_strlen(src);
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (*dest)
		dest++;
	i = 0;
	while ((i < size - (l - ft_strlen(src)) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
