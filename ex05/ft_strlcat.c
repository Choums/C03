/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:49:58 by caidel            #+#    #+#             */
/*   Updated: 2020/07/19 16:59:45 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int tdst;
	unsigned int j;
	unsigned int tsrc;
	unsigned int max;

	i = 0;
	tsrc = ft_strlen(src);
	tdst = ft_strlen(dest);
	j = tdst;
	if (size <= tdst)
		return (size + tsrc);
	max = size - i;
	while (src[i] && i < max - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (tdst + tsrc);
}
