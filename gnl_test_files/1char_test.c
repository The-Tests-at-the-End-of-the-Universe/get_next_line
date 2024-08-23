/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1char_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:23:27 by mynodeus          #+#    #+#             */
/*   Updated: 2024/05/17 16:32:39 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../gnl_tester.h"

void	one_char(void)
{
	int	testnbr;
	int	linenbr;
	int	fd;

	testnbr = 1;
	linenbr = 1;
	printf(BMAG "1char.txt:\n" RESET);
	fd = open("test_files/1char.txt", O_RDONLY);
	if (tester(fd, "1\n", testnbr, linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, "1\n", ++testnbr, ++linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, "1", ++testnbr, ++linenbr) == 1)
		return ((void)fail_print());
	close(fd);
	printf("\n");
}
