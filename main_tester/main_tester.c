/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:13:37 by mynodeus          #+#    #+#             */
/*   Updated: 2024/05/17 16:45:41 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	*test;
	int		fd;
	int		index;

	fd = open("main_ext.txt", O_RDONLY);
	index = 0;
	test = get_next_line(fd, 0);
	printf("String returned:\n");
	printf("%s\n", test);
	printf("Ascii returned:\n");
	while (test[index] != '\0')
		printf("%i\n", test[index++]);
	index = 0;
	free(test);
	close(fd);
	return (0);
}
