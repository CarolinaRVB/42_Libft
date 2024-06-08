/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:12:13 by crebelo-          #+#    #+#             */
/*   Updated: 2024/06/08 18:11:42 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*               This is a simple tester i'm creating for libft               */

#include "libft.h"
#include <string.h>
// ANSI color codes
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define RESET "\x1B[0m"


void	strlen_tester(char *str)
{
	printf("Test String: %s\n", str);
	printf("STRLEN: %lu\n", strlen(str));
	printf("FT_STRLEN: %lu\n", ft_strlen(str));
	if (strlen(str) == ft_strlen(str))
		printf(GREEN "Result: OK\n\n" RESET);
	else
		printf(RED "Result: KO" RESET);
}

void	memcpy_tester(char *type, void *dest, const void *src, size_t n)
{
	char	*memcpy_result = memcpy(dest, src, n);
	char	*ft_memcpy_result = ft_memcpy(dest, src, n);
	
	printf("Type of test: %s\n", type);
	printf("Dest String before copy: %p\n", dest);
	printf("Src String: %p\n", src);
	printf("Dest String after copy: %p\n", dest);
	if (strcmp(memcpy_result, ft_memcpy_result) == 0)
		printf(GREEN "Result: OK\n\n" RESET);
	else
		printf(RED "Result: KO" RESET);
}

int	main()
{
	/* Testing part 1 */
	
	// ft_strlen
	printf("\n\n###########  STRLEN TESTS  ###########\n\n");
	strlen_tester("hello world!");
	strlen_tester("");
	strlen_tester("a");
	strlen_tester("1 23 4");
	strlen_tester("-42");
	strlen_tester("string\nnewline");
	strlen_tester("string\0null");
	strlen_tester("really big stringgggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg");
	printf("######################################\n\n");
	
	// ft_memcpy
	printf("\n\n###########  MEMCPY TESTS  ###########\n\n");
	char	dst1[6];
	memcpy_tester("Empty destination", dst1, "Hello world", 6);
	char	dst2[6] = "world";
	memcpy_tester("Overlapping" ,dst2, "Hello", 6);
	char	dst3[6] = "abcdef";
	memcpy_tester("Copy numeric" , dst3, "123456", 6);
	char	dst4[6];
	memcpy_tester("empty src" , dst4, "", 6);	
	
	
	// ft_memset
	
	return (0);
}