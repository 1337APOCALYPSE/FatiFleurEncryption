#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int a;

	a = 0;
	if (argv[1][0] == '0')
	{
		while (argv[2][a])
		{
			if (argv[2][a] == 'c' && argv[2][a + 1] == 'h')
			{
				ft_putchar('x');
				a++;
			}
			else
			{
				ft_putchar(argv[2][a]);
			}
			a++;
		}
	}
	else if(argv[1][0] == '1')
	{
		while (argv[2][a])
		{
			if (argv[2][a] == 'x')
			{
				ft_putchar('c');
				ft_putchar('h');
			}
			else
			{
				ft_putchar(argv[2][a]);
			}
			a++;
		}
	}
	ft_putchar('\n');
	return (0);
}
