/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:23:27 by mynodeus          #+#    #+#             */
/*   Updated: 2024/05/17 16:38:14 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../gnl_tester.h"

void	empty(void)
{
	int	testnbr;
	int	linenbr;
	int	fd;

	testnbr = 1;
	linenbr = 1;
	printf(BMAG "empty.txt:\n" RESET);
	fd = open("test_files/empty.txt", O_RDONLY);
	if (tester(fd, NULL, testnbr, linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, NULL, ++testnbr, ++linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, NULL, ++testnbr, ++linenbr) == 1)
		return ((void)fail_print());
	close(fd);
	printf("\n");
}
