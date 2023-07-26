/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet_hard_code.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-koni <lde-koni@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 12:44:20 by lde-koni      #+#    #+#                 */
/*   Updated: 2023/07/26 12:49:34 by lde-koni      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays the alphabet in lowercase, on a single line,
// by ascending order, starting from the letter ’a’. Allowed functions: write.
// This is the moest easy way to print the alphabet, just by hardcoding it. 

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}