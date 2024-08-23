/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:23:27 by mynodeus          #+#    #+#             */
/*   Updated: 2024/05/17 16:59:47 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../gnl_tester.h"

char	*g_test_1 = "hfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu"
	"3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdsk"
	"jfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfk"
	"jhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfis"
	"udhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbc"
	"jbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3"
	"hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjf"
	"ndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjh"
	"dsfkjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisud"
	"hfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjb"
	"dsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr"
	"9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfnd"
	"skjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhds"
	"fkjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhf"
	"kjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbds"
	"jcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr97"
	"23yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfnds"
	"kjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsf"
	"kjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfk"
	"jdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsj"
	"cbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskjcdknckjwefu3hr972"
	"3yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkjhdskjfhdskjfndskj"
	"cdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhjhfisudhfkjdshfkjdshfkjhdsfkj"
	"hdskjfhdskjfndskjcdknckjwefu3hr9723yr7hkjcdsbcjbdsjcbshjbhj";

void	longline(void)
{
	int	testnbr;
	int	linenbr;
	int	fd;

	testnbr = 1;
	linenbr = 1;
	printf(BMAG "longline.txt:\n" RESET);
	fd = open("test_files/longline.txt", O_RDONLY);
	if (tester(fd, g_test_1, testnbr, linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, NULL, ++testnbr, ++linenbr) == 1)
		return ((void)fail_print());
	if (tester(fd, NULL, ++testnbr, ++linenbr) == 1)
		return ((void)fail_print());
	close(fd);
	printf("\n");
}
