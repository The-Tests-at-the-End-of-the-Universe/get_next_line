/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:17:44 by mynodeus          #+#    #+#             */
/*   Updated: 2024/05/17 17:35:37 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../gnl_tester.h"

int	tester(const int fd, char *str, int testnbr, int linenbr)
{
	int		rtr;
	char	*gnl;

	rtr = 0;
	gnl = get_next_line(fd, 0);
	if (str && gnl)
	{
		if (test_strlen(gnl) > test_strlen(str))
			rtr += test_strncmp(str, gnl, test_strlen(gnl));
		else
			rtr += test_strncmp(str, gnl, test_strlen(str));
	}
	if (rtr != 0 || (gnl && !str) || (!gnl && str))
		log_error(gnl, str, testnbr, linenbr);
	printf(GRN "%d OK " RESET, testnbr);
	free(gnl);
	return (0);
}

int	main(void)
{
	fclose(fopen("logs/error_log.txt", "w"));
	printf(BLU "\nBUFFER_SIZE = " RESET);
	printf(YEL "%d\n\n" RESET, BUFFER_SIZE);
	one_char();
	empty();
	longline();
	longline_nl();
	multiplelines();
	nlines();
	stdin_test();
	return (1);
}
