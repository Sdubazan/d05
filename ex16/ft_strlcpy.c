/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:07:41 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 13:11:14 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, char *src, int size)
{
	size_t	count;
	size_t	size;

	count = 0;
	size = 0;
	if (!dest)
		return (0);
	while (src[size])
		size++;
	if (!size)
		return (size);
	while (src[count] && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (size);
}
