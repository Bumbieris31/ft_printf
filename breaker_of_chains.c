/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   breaker_of_chains.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abumbier <abumbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 16:19:52 by abumbier          #+#    #+#             */
/*   Updated: 2019/06/26 15:41:22 by abumbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	void	*ptr;

	ptr = 0;
	ft_printf("%#o and %.8X = %010i \\\\%s\n\n", 123, 345, 678, "Wait that's not how math works!");
	printf("%#o and %.8X = %010i \\\\%s\n\n", 123, 345, 678, "Wait that's not how math works!");

	ft_printf("my:%s = %p is crazy look %.3lX%s", "bro this ptr", ptr, 135724683579, "\n\n");
	printf("og:%s = %p is crazy look %.3lX%s", "bro this ptr", ptr, 135724683579, "\n\n");

	ft_printf("ok %% this %%%% is new %c%c%c%%%-50.40ohehe\n\n", 'O', 'n', 'E', 98765);
	printf("ok %% this %%%% is new %c%c%c%%%-50.40ohehe\n\n", 'O', 'n', 'E', 98765);

	ft_printf("int stuff %hhd %.5hd %06d % ld %+lld\n", (char)123, (short)123, 123, (long)123, (long long)123);
	printf("int stuff %hhd %.5hd %06d % ld %+lld\n", (char)123, (short)123, 123, (long)123, (long long)123);

	ft_printf("%#2.f\n", 4.123909);
	printf("%#2.f\n", 4.123909);
	ft_printf("% .2f\n", -4.123909);
	printf("% .2f\n", -4.123909);
	ft_printf("% i\n", -123);
	printf("% i\n", -123);
	ft_printf("%c %i\n", -123, 5);
	printf("%c %i\n", -123, 5);
	return (0);
}