#include "printf.h"

int	main()
{
	char a = 's';
	char b[] = "salut";
	int	i = 42;

	//ft_printf("adresse de a: %p\n character 'a': %c\n string de salut: %s\nint 42: %d\n 42 en hexa low: %x\n 42 en hexa upper: %X", &a, a, b, i, i, i);
	//printf("adresse de a: %p\n character 'a': %c\n string de salut: %s\nint 42: %d\n 42 en hexa low: %x\n 42 en hexa upper: %X\n", &a, a, b, i, i, i);
	
	ft_printf("%xmimimi", i);
	// ft_printf("sortie ft_printf de adresse de a%d\n", ft_printf("%p\n", &a));
	// printf("sortie printf de adresse de a%d\n", printf("%p\n", &a));
	// ft_printf("sortie ft_printf character 'a': %d\n", ft_printf("%c\n", a));
	// printf("sortie printf character 'a': %d\n", printf("%c\n", a));
	// ft_printf("sortie ft_printf string de salut: %d\n", ft_printf("%s\n", b));
	// printf("sortie printf string de salut: %d\n", printf("%s\n", b));
	// ft_printf("sortie ft_printf int 42: %d\n", ft_printf("%d\n", i));
	// printf("sortie printf de int 42: %d\n", printf("%d\n", i));
	// ft_printf("sortie ft_printf 42 en hexa low:%d\n", ft_printf("%x\n", i));
	// printf("sortie printf 42 en hexa low:%d\n", printf("%x\n", i));

}