/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:43:03 by jhurtado          #+#    #+#             */
/*   Updated: 2022/04/06 11:17:56 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	check_errors(int value2, char *op)
{
	int	cond1;
	int	cond2;

	cond1 = (op[0] == '+' || op[0] == '-' || op[0] == '/');
	cond2 = (op[0] == '*' || op[0] == '%');
	if (!(cond1 || cond2))
	{
		write(1, "0", 1);
		return (1);
	}
	else if (op[0] == '/' && value2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (1);
	}
	else if (op[0] == '%' && value2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (1);
	}
	return (0);
}

int	operate(int value1, int value2, char *op)
{
	int	result;
	int	(*operator[5])(int, int);

	result = 0;
	operator[0] = & ft_add;
	operator[1] = & ft_div;
	operator[2] = & ft_mod;
	operator[3] = & ft_mul;
	operator[4] = & ft_sub;
	if (op[0] == '+')
		result = operator[0](value1, value2);
	else if (op[0] == '/')
		result = operator[1](value1, value2);
	else if (op[0] == '%')
		result = operator[2](value1, value2);
	else if (op[0] == '*')
		result = operator[3](value1, value2);
	else if (op[0] == '-')
		result = operator[4](value1, value2);
	return (result);
}

int	main(int argn, char **argv)
{
	int		value1;
	int		value2;
	int		result;
	char	*op;
	int		error;

	error = 0;
	if (argn == 4)
	{
		op = argv[2];
		value1 = ft_atoi(argv[1]);
		value2 = ft_atoi(argv[3]);
		if (check_errors(value2, op) == 0)
		{
			result = operate(value1, value2, op);
			ft_putnbr(result);
			write(1, "\n", 1);
		}
	}
	return (0);
}
