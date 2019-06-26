/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abumbier <abumbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:24:45 by abumbier          #+#    #+#             */
/*   Updated: 2019/06/16 16:15:11 by abumbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*get_str(char *str, unsigned long long n, int len)
{
	if (str == 0)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}

char		*ft_llutoa(unsigned long long n)
{
	int			len;
	char		*str;

	len = ft_unslen(n);
	str = (char*)malloc(sizeof(char) * len + 1);
	return (get_str(str, n, len));
}
