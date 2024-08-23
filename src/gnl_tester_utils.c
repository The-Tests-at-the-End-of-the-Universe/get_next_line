/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:22:03 by mynodeus          #+#    #+#             */
/*   Updated: 2024/05/17 17:35:22 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../gnl_tester.h"

int	log_error(char *gnl, char	*str, int testnbr, int linenbr)
{
	FILE	*errorlog;
	int		error_index;

	error_index = 0;
	errorlog = fopen("logs/error_log.txt", "a");
	printf(RED "%d " RESET, testnbr);
	printf(RED "FAIL " RESET);
	printf(RED "Check error_log.txt\n" RESET);
	fprintf(errorlog, "----------------\n");
	fprintf(errorlog, "Test number %d\n", testnbr);
	fprintf(errorlog, "Line %d\n", linenbr);
	fprintf(errorlog, "expected output: %s\n", str);
	if (gnl)
	{
		while (gnl[error_index] != '\0')
			fprintf(errorlog, "gnl output: %d\n", gnl[error_index++]);
	}
	fprintf(errorlog, "gnl output: %s\n", gnl);
	fclose(errorlog);
	return (0);
}

size_t	test_strlen(const char *s)
{
	size_t	index;

	index = 0;
	if (s[index] == '\0')
	{
		return (0);
	}
	else
	{
		while (s[index] != '\0')
		{
			index++;
		}
		return (index);
	}
}

int	test_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	s1_len;
	size_t	s2_len;
	int		returnval;

	index = 0;
	returnval = 0;
	s1_len = test_strlen(s1);
	s2_len = test_strlen(s2);
	while (index < n && (index < s1_len || index < s2_len))
	{
		if ((unsigned char)s1[index] != (unsigned char)s2[index])
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		index++;
	}
	return (returnval);
}

int	fail_print(void)
{
	printf(RED "Program crashed\n" RESET);
	return (0);
}
