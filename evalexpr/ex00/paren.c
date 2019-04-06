/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paren.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 05:59:58 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/09/09 06:00:03 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		paren(char *str)
{
	int i;
	int nparen;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(')
			nparen++;
		i++;
	}
	return (nparen);
}

char*	paren_parse(char *str)
{
	int i;
	int nparen;
	int paren;
	int start;
	int fin;
	char *pstr;

	i = 0;
	paren = 0;
	nparen = paren(str);
	start = 0;
	fin = 0;
	while (str[i] != ')')
	{
		if (opertier(str[i]) == 0 && paren < nparen)
		{
			paren++;
			start = i;
			i++;
		}
		i++
		fin = i;
	}
	pstr = (char*)sizeof(char) * (fin - start);
	pstr = strparse(str, start, fin);
	return (pstr);
}