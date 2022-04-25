/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:52:11 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/27 21:42:19 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_column(int comb[24][4], char *line, int i)
{
	int	j;

	j = 0;
	while (j <= 23)
	{
		comb[j][i] = line[j] - '0';
		j++;
	}
}

void	fill_comb(int comb[24][4])
{
	char	*column1;
	char	*column2;
	char	*column3;
	char	*column4;

	column1 = "111111222222333333444444";
	column2 = "223344113344112244112233";
	column3 = "342423341413241412231312";
	column4 = "434232434131424121323121";
	fill_column(comb, column1, 0);
	fill_column(comb, column2, 1);
	fill_column(comb, column3, 2);
	fill_column(comb, column4, 3);
}
