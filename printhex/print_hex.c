#include <unistd.h>
#include <stdio.h>

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int x;
	int res;
	int neg;

	x = 0;
	res = 0;
	neg = 1;
	while (ft_isspace(str[x]) == 1)
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			neg = -1;
		x++;
	}
	while ((str[x] <= '9') && (str[x] >= '0'))
	{
		res = res * 10 + str[x] - '0';
		x++;
	}
	return (res * neg);
}

void	print_hex(int a)
{	
	int rem;

	if (a > 16)
		print_hex(a / 16);
	rem = a % 16;
	if (rem <= 9 && rem >= 0)
		rem = rem + '0';
	else
		rem = rem + 'a' - 10;
	write(1, &rem, 1);

}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	return 0;
}