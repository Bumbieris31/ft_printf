#include <stdio.h>
#include <string.h>
#include "ft_printf.h"
#include "libft/libft.h"

int	main(void)
{
	char	c;
	char	*emoji;
	char	*str = (char*)malloc(3);
	int		i = -1234;
	int		j = 1234;
	int		h;
	char	*test;
	double	lf = 123.12341234123412341234;
	float	f = 0;

	c = 'T';
	test = &c;
	emoji = "abcd\U0001F3C0 hophop\U0001F3D2  \xE2\x9D\x93 \n";
////////////////////////////////////////////////////////////////////
/*
	c = 0;
	str[0] = 'a';
	str[1] = 'b';
	str[2] = '\0';
	i = printf("%s%c\n", str, 0);
	str = ft_prefix_char(c, str);
	h = printf("%s\n", str);
	j = ft_printf("%s\n", str);
	ft_putchar(0);

	printf("my:%d *** og1:%d og2:%d", j, i, h);
	*/

	ft_printf("positive float: {%.1000f}\n", 1444565444646.6465424242242454654);
	printf("positive float: {%.1000f}\n", 1444565444646.6465424242242454654);
	ft_printf("neg float: {%f}\n", -1444565444646.6465424242242454654);
	printf("neg float: {%f}\n", -1444565444646.6465424242242454654);
	ft_printf("my emoji pattern: %s", emoji);
	// ft_printf("%.2c", NULL);
	// ft_printf("%2c", 0);
	// ft_printf("my:% c\n", 0);
	// printf("og:% c\n", 0);
	// ft_printf("@moulitest: %.d %.0d\n", 0, 0);
	// printf("@moulitest: %.d %.0d\n\n", 0, 0);
	// ft_printf("@moulitest: %.f %.0f\n", f, f);
	// printf("@moulitest: %.f %.0f\n\n", f, f);
	// ft_printf("my:%.40d\n", 42);
	// printf("og:%.40d\n\n", 42);
	// ft_printf("%.p, %.0p\n", 0, 0);
	// printf("%.p, %.0p\n\n", 0, 0);
	// ft_printf("my:%-5c\n", 0);
	// printf("og:%-5c\n", 0);
	// ft_printf("%%\n");
	// printf("%%\n");
	// ft_printf("hey%chey\n", 0);
	// printf("hey%chey\n", 0);
	// ft_printf("my =>***%+010d***\n", i);
	// printf("og =>***%+010d***\n\n", i);
	// ft_printf("my =>***%10lli***\n", (long long)i);
	// printf("og =>***%10lli***\n\n", (long long)i);
	// ft_printf("my =>***%-10hhd***\n", (char)i);
	// printf("og =>***%-10hhd***\n\n", (char)i);
	// ft_printf("my =>***%-30lo%0#30lo%-.30lo***\n", (unsigned long)i, (unsigned long)i, (unsigned long)i);
	// printf("og =>***%-30lo%0#30lo%-.30lo***\n\n", (unsigned long)i, (unsigned long)i, (unsigned long)i);
	// ft_printf("my =>***%0hx***\n", (unsigned short)i);
	// printf("og =>***%0hx***\n\n", (unsigned short)i);
	// ft_printf("my =>***%-c***\n", c);
	// printf("og =>***%-c***\n\n", c);
	// ft_printf("my =>***%-p***\n", test);
	// printf("og =>***%-p***\n\n", test);
	// ft_printf("my =>***%-s***\n", str);
	// printf("og =>***%-s***\n\n", str);
	// ft_printf("my =>***%+-#.15lf***\n", lf);
	// printf("og =>***%+-#.15lf***\n\n", lf);
	// ft_printf("my =>***%-7hhd%+-#lf %.4s***\n", (char)i, (double)j, str);
	// printf("og =>***%-7hhd%+-#lf %.4s***\n\n", (char)i, (double)j, str);
	// ft_printf("bt =>%u\n", 4294967295);
	// printf("bt =>%u\n\n", 4294967295);
	// ft_printf("%hhd\n", 128);
	// printf("%hhd\n\n", 128);
	// ft_printf("%0+5d\n", 42);
	// printf("%0+5d\n\n", 42);
	// ft_printf("@moulitest my: %#.x %#.0x\n", 0, 0);
	// printf("@moulitest og: %#.x %#.0x\n\n", 0, 0);
	// printf("null test %c\n", 0);
	// ft_printf("my:%#6o\n", 2500);
	// printf("og:%#6o\n\n", 2500);
	// ft_printf("my:%-#6o\n", 2500);
	// printf("og:%-#6o\n\n", 2500);
	// ft_printf("my:%#08x\n", 42);
	// printf("og:%#08x\n\n", 42);
	// ft_printf("my:% d\n", -42);
	// printf("og:% d\n\n", -42);
	// ft_printf("my:%+10.5d\n", 4242);
	// printf("og:%+10.5d\n\n", 4242);
	// ft_printf("my:%03.2d\n", -1);
	// printf("og:%03.2d\n\n", -1);
	// ft_printf("@moulitest my: %.o %.0o\n", 0, 0);
	// printf("@moulitest og: %.o %.0o\n\n", 0, 0);
	// ft_printf("@moulitest my: %5.o %5.0o\n", 0, 0);
	// printf("@moulitest og: %5.o %5.0o\n\n", 0, 0);
	// ft_printf("my:%5%\n");
	// printf("og:%5%\n\n");
	// ft_printf("my:%-5%\n");
	// printf("og:%-5%\n\n");
	// ft_printf("my:%.0%\n");
	// printf("og:%.0%\n\n");
	// ft_printf("%hhd\n", 128);
	// ft_printf("%hd\n", 32768);
	// ft_printf("asd%qwe%kva%zbas");
	// while (1);
}