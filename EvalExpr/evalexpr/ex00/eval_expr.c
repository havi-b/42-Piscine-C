/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 05:58:25 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/09/09 05:58:29 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int eval_expr(char *str)
{
	int i;
	char *pstr;
	int res;

	i = 0;
	while (str[i] != '\0')
	{
		if (opertier(str[i]) == 0)
		{
			pstr = paren_parse(str);
			res = 
		}
		i++;
	}
}