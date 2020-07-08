/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:49:58 by caidel            #+#    #+#             */
/*   Updated: 2020/07/08 13:36:59 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
unsigned int	ft_strlcat (char *dest, char *src, unsigned int size)
{
  unsigned int i;
  unsigned int tdst;

  i = 0;
  tdst = 0;
  while (dest[tdst])
    tdst++;
  while (src[i])
    {
      if (i < tdst)
      {
        dest[tdst] = src[i];
      }
      tdst++;
      i++;
    }
  dest[i] = '\0';
  return (tdst);
}

int main()
{
  char s1[30] = "Salut tu vas";
  char s2[] = " bien ?";
  
  printf("%d et %s", ft_strlcat(s1, s2, 5), s1);

  return 0;
}
