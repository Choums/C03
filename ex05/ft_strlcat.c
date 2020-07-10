/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:49:58 by caidel            #+#    #+#             */
/*   Updated: 2020/07/10 12:43:27 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int tdst;
	unsigned int j;
	unsigned int tsrc;

	j = 0;
	i = 0;
	tsrc = 0;
	tdst = 0;
	while (dest[tdst])
		tdst++;
	while (src[tsrc])
		tsrc++;
	while (dest[j])
		j++;
	if (!(size))
		return (tdst + tsrc);
	if (size >= tdst)
		return (size + tsrc);
	while (src[i] && i < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (tdst + tsrc);
}
