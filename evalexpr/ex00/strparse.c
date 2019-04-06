/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strparse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:23:54 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/09/09 19:23:56 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*	strparse(char *str, int start, int fin)
{
	int i;
	int j;
	char *pstr;

	i = 0;
	j = 0;
	pstr = (char*)sizeof(char) * (fin - start);
	while (i <= start)
		i++;
	while (str[i] != str[fin])
	{
		pstr[j] = str[i];
		i++;
		j++;
	}
	return (pstr);
}