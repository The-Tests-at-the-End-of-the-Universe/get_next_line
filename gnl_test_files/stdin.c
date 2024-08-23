/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:23:27 by mynodeus          #+#    #+#             */
/*   Updated: 2024/05/17 17:15:22 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../gnl_tester.h"

void	stdin_test(void)
{
	int	tnbr;
	int	linenbr;
	int	fd;

	tnbr = 1;
	linenbr = 1;
	printf(BMAG "stdin\n" RESET);
	fd = STDIN_FILENO;
	if (tester(fd, "fkdsnckjdsnmdscmslkdmclk\n", tnbr, linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, "jfiewjofjesofjiesfojesf\n", ++tnbr, ++linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, "mclsmcklkdscmkdskmclmsdclkmds\n", ++tnbr, ++linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, "kdcmslkdcmsmdslkmckdsmfkemwl\n", tnbr, linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, "j94u23jr23nlkneflkflkmlkmm\n", ++tnbr, ++linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, "3yrhonkjnejfjknf23kjnf3nnj\n", ++tnbr, ++linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, NULL, ++tnbr, ++linenbr) == 1)
		return ((void)fail_print());
	close(fd);
	printf("\n");
}
