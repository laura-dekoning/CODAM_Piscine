/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 12:41:12 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/07/26 12:49:08 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays the alphabet in lowercase, on a single line,
// by ascending order, starting from the letter ’a’. Allowed functions: write.

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}