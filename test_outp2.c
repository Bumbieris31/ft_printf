#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
    long long i;
    
    i = -9223372036854775;
    
    printf("\n");
    printf("\n");
    ft_printf("%p \n", &i);
    printf("%p \n", &i);
    printf("\n");
    ft_printf("positive float: {%f}", 1444565444646.6465424242242454654);
    printf("\n");
    printf("positive float: {%f}", 1444565444646.6465424242242454654);
    printf("\n");
    printf("\n");
    ft_printf("neg float: {%f}", -1444565444646.6465424242242454654);
    printf("\n");
    printf("neg float: {%f}", -1444565444646.6465424242242454654);
    printf("\n");
    printf("\n");
    ft_printf("m: crazy precis float: {%.1000f}", -1444565444646.646312341234);
    printf("\n");
    printf("r: crazy precis float: {%.1000f}", -1444565444646.646312341234);
    printf("\n");
    printf("\n");
    printf("%+12.10d %0.1d, %10d, % d, %+d, ", 42, 42, 42, 42, 42);
    printf("\n");
    ft_printf("%+12.10d %0.1d, %10d, % d, %+d, ",42, 42, 42, 42, 42);
    printf("\n");
    printf("\n");
    ft_printf("%03.2d, %12.10d %0.1d, %10d, % d, %+d, ", -10, -42, -42, -42, -42, -42);
    printf("\n");
    printf("%03.2d, %12.10d %0.1d, %10d, % d, %+d, ", -10, -42, -42, -42, -42, -42);
    printf("\n");
    printf("\n");
    ft_printf("%0d", -42);
    printf("\n");
    printf("%0d", -42);
    printf("\n");
    printf("\n");
    ft_printf("zero string (should be empy):%.0s", "string zero");
    printf("\n");
    printf("zero string (should be empy):%.0s", "string zero");
    printf("\n");
    printf("\n");
    ft_printf("%.5s: this was precision 5", "string zero");
    printf("\n");
    printf("%.5s: this was precision 5", "string zero");
    printf("\n");
    printf("\n");
    ft_printf("%00d", -42);
    printf("\n");
    printf("%00d", -42);
    printf("\n");
    ft_printf("%c %s %p %i %o %lld %x %X %%%%hallooo", 'c', "hi", &i, 5000, 5000, -92233720368547758, 502300, 502300);
    printf("\n");
    printf("%c %s %p %i %o %ld %x %X %%%%hallooo", 'c', "hi", &i, 5000, 5000, -92233720368547758, 502300, 502300);
    printf("\n");
    printf("\n");
    ft_printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\n");
    ft_printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\n");
    return 0;
}