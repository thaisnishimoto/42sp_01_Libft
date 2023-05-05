/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:00:21 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/05/05 00:27:14 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "../libft.h"

MU_TEST(test_change_string)
{
	char	src[] = "fonte";
	char	dest[] = "destino";

	char	expected[] = "fontino";
	void	*result = ft_memmove(dest, src, 3);
	printf("%s\n", dest);

	mu_assert_string_eq(expected, result);
}

MU_TEST(test_array_of_num)
{
	int	src[6] = {9, 1, 1, 1, 1, 1};
	int	dest[3] = {2, 2, 2};
	int	i = 0;

	while (i < 3)
		printf("%d", dest[i++]);
	int	expected[] = {9, 1, 2};
	void	*result = ft_memmove(dest, src, 2);
	i = 0;
	while (i < 3)
		printf("%d", dest[i++]);

	mu_assert_string_eq((void *)expected, result);
}

MU_TEST(test_empty_dest)
{
	int	src[6] = {1, 9, 1, 1, 1, 1};
	int	dest[2];
	int	i = 0;

	int	expected[] = {1, 9};
	void	*result = ft_memmove(dest, src, 8);
	i = 0;
	while (i < 2)
		printf("%d, ", dest[i++]);

	mu_assert_string_eq((void *)expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_change_string);
	MU_RUN_TEST(test_array_of_num);
	MU_RUN_TEST(test_empty_dest);
}

int	main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
