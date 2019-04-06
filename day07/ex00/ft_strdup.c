/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:12:06 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/08/30 23:05:34 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char*)malloc(sizeof(char) * len + 1);
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
