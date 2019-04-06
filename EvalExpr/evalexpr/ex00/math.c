/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:33:31 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/09/04 22:33:06 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		math(char *str)
{
	char *nb1;
	char *nb2;
	char opr;
	int res;
	int i;
	int j;

	i = 0;
	j = 0;
	res = 0;
	while (is_opr(str[i]) != 1)
	{
		nb1[i] = str[i];
		i++
	}
	if (is_opr(str[i]) == 1)
	{	
		opr = str[i];
		i++;
	}
	while (str[i] != '\0')
	{
		nb2[i] = str[i];
		i++
	}
	num1 = advanced_ft_atoi(nb1);
	num2 = advanced_ft_atoi(nb2);
	if (opr == '+')
		res = num1 + num2;
	if (opr == '-')
		res = num1 - num2;
	if (opr == '*')
		res = num1 * num2;
	if (opr == '/')
		res = num1 / num2;
	if (opr == '%')
		res = num1 % num2;
	return (res);
}
